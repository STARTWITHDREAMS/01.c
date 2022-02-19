#include <iostream>
using namespace std;
int n, m;
long long a1, a2;
int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
		{
			a1 += min(i, j);
			a2 += i*j - min(i, j);
		}
	cout << a1 <<' '<< a2;
	return 0;
}