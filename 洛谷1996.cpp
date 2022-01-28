#include <iostream>
#include <queue>
using namespace std;
int n, m, ans;
queue <int> s;
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		s.push(i);
	}
	int cnt = 1;
	int t = m % (n+1) ? m % (n+1) : 1;
	while (!s.empty()) {
		if (cnt % (t) == 0) {
			cout << s.front() << ' ';
			s.pop();
			n--;
		}
		else {
			s.push(s.front());
			s.pop();
		}
		cnt++;
	}
	return 0;
}