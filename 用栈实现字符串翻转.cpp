#include <iostream>
#include <stack>
using namespace std;
stack < char > a;
char tmp;
int main() {
	while (1) {
		tmp = getchar();
		if (tmp == ' ' || tmp == '\n') {
			while (!a.empty()) {
				cout << a.top();
				a.pop();
			}
			if (tmp == ' ')
				cout << tmp;
			else
				break;
		}
		else
			a.push(tmp);
	}
	return 0;
}