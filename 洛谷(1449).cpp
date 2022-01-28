#include <iostream>
#include <stack>
#include <string>
using namespace std;
 int ans; stack <int> s;
 string A;
int main() {
	getline(cin, A); int cnt = 0; int t = 0;
	for (int i = 0; A[i] != '@'; ++i) {
		if (A[i] >= '0' && A[i] <= '9')
		{
			t = t*10 + A[i] - '0';
		}
		else if (A[i] == '.') {
			s.push(t);
			t = 0;
		}
		else if (A[i] == '+') {
			cnt = s.top();
			s.pop();
			s.top() += cnt;
		}
		else if (A[i] == '-') {
			cnt = s.top();
			s.pop();
			s.top() -=cnt;
		}
		else if (A[i] == '*') {
			cnt = s.top();
			s.pop();
			s.top() *= cnt;
		}
		else {
			cnt = s.top();
			s.pop();
			s.top() /= cnt;
		}
	}
	cout << s.top();
	return 0;
}
