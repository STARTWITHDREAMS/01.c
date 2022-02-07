#include <iostream>
using namespace std;
int a[8], n,t,b[8];
int main() {
	int cnt = 0;
	cin >> n; 
	for (int i = 1; i <= 7; ++i)
		cin >> b[i];
	for (int i = 0; i < n; ++i) {
		for (int j = 1; j <= 7; ++j) {
			cin >> t;
			if (t == b[1] || t == b[2] || t == b[3] || t == b[4] || t == b[5] || t == b[6] || t == b[7])
				cnt++;
		}
		a[7 - cnt]++;
		cnt = 0;
	}
	for (int i = 0; i < 7; ++i)
		cout << a[i] << ' ';
	return 0;
}