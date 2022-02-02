#include <iostream>
using namespace std;
int m, n, f[1005][1005]; int t = 0;
int main() {
	cin >> m >> n;
	f[m - 1][1] = 0; f[m][1] = 1; int len = 1;
	for (int i = m + 1; i <= n; i++) {
		for (int j = 1; j <= len; j++) {
			f[i][j + 1] = (f[i - 2][j] + f[i - 1][j]+f[i][j]) / 10;
			f[i][j] = (f[i][j]+f[i - 2][j] + f[i - 1][j]) % 10;
		}
		while (f[i][len+1])
			len++;
	}
	for (int i = len; i >= 1; i--)
		cout << f[n][i];
	return 0;
}