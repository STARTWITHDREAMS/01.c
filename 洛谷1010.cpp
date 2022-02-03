#include <iostream>
#include <cstring>
using namespace std;
void f(int x) {
	int j = 1, i;
	for ( i = 1; ; ++i) {
		j *= 2;
		if (j > x) {
			--i;
			j /= 2;
			break;
		}
	}
	if (i == 0) {
		cout << "2(0)";
	}
	else if (i == 1) {
		cout << 2;
	}
	else {
		cout << "2(";
			f(i);
		cout << ')';
	}
	if (x - j > 0) {
		cout << '+';
		f(x - j);
	}
}
int main() {
	int n;
	cin >> n;
	f(n);
	return 0;
}