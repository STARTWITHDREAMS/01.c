#include<iostream>
using namespace std;
char a[205]; int n,s;
void print() {
	for (int i = 1; i <= 2 * n + 2; ++i)
		cout << a[i];
	cout << endl;
}
void init() {
	for (int i = 1, j = n + 1; i <= n;++j,++i)
		a[i] = 'o', a[j] = '*';
	a[2 * n + 1] = '-';
	a[2 * n + 2] = '-';
	s = 2 * n + 1;
	print();
}
void move(int k) {
	for (int i = 0; i < 2; ++i) {
		a[s + i] = a[k + i];
		a[k + i] = '-';
	}
	s = k;
	print();
}
void solve(int k) {
	if (k == 4) {
		move(4); move(8); move(2); move(7); move(1);
	}
	else {
		move(k); move(2 * k - 1); solve(k - 1);
	}
}
int main() {
	cin >> n;
	init();
	solve(n);
	return 0;
}