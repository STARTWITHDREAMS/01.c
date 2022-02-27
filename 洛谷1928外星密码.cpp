#include <iostream>
#include <string>
using namespace std;
char ch; int D;
string solve() {
	string A, P;
	char ch; int D;
	//注意如果放在函数外会出现错误;
	while (cin >> ch) {
		if (ch == '[')
		{
			cin >> D;
			P = solve();
			for (int i = 1; i <= D; ++i)
				A += P;
		}
		else if (ch == ']') {
			return A;
		}
		else
			A += ch;
	}
	return A;
}
int main() {
	cout << solve();
	return 0;
}