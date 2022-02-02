#include <iostream>
#include <cmath>
using namespace std;
char a[1001][1001]; int n;
void print(int x, int y, int c) {
		if (c == 1)
		{
			a[x][y] = '/';
			a[x][y + 1] = '\\';
			a[x + 1][y - 1] = '/';
			a[x + 1][y] = '_';
			a[x + 1][y + 1] = '_';
			a[x + 1][y + 2] = '\\';
			return;
		}
	 print(x, y, c - 1);
	 print(x + pow(2, c-1), y - pow(2, c - 1), c - 1);
	 print(x + pow(2,c-1), y + pow(2, c - 1), c - 1);
}
int main() {
	cin >> n;
	print(0, pow(2,n)-1, n);
	for (int i = 0; i < pow(2,n); i++) {
		for (int j = 0; j <pow(2,n+1); j++) {
			if (a[i][j])
				cout << a[i][j];
			else
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}