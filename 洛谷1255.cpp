#include <iostream>
using namespace std;
int f[5005][5005], n;
int main() {
	cin >> n;
	f[0][1] = 1; f[1][1] = 1; int len = 1;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j <= len; ++j) {
			f[i][j + 1] = (f[i - 1][j] + f[i - 2][j]+f[i][j]) / 10;
				f[i][j] = (f[i][j] + f[i - 1][j] + f[i - 2][j]) % 10;
		}
		if (f[i][len + 1])
			len++;
	}
	for (int i = len; i >= 1; --i)
		cout << f[n][i];
	return 0;
}