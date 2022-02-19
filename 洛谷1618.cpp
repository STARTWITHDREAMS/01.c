#include <iostream>
#include <cstring>
using namespace std;
int A, B, C;
int num[10],a,b,c,ans;
int solve(int x) {
	num[0] = 1;
	if (!num[x / 100])
		num[x / 100] = 1;
	else
		return 0;
	if (!num[x / 10 % 10])
	num[x / 10 % 10] = 1;
	else
		return 0;
	if (!num[x % 10])
		num[x % 10] = 1;
	else
		return 0;
	return 1;
}
int main() {
	cin >> A >> B >> C;
	for(int i = 1; i <= 9; ++i)
		for (int j = 1; j <= 9; ++j) {
			if (j == i)
				continue;
			for (int k =1; k <= 9; ++k)
			{
				if (k == i || k == j)
					continue;
				memset(num, 0, sizeof(num));
				a = 100 * i + 10 * j + k;
				b = a * B / A;
				c = a * C / A;
				if (a > 999 || b > 999 || c > 999)
					continue;
				solve(a);
				if (solve(b) && solve(c)) {
					ans = 1; cout << a << ' ' << b << ' ' << c << endl;
				}
			}
		}
	if (!ans)
		cout << "No!!!";
	return 0;
}