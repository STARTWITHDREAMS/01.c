#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int N, A, B, K[205], ans[205],x;
struct fl{
	int f;
};
queue <fl> s; 
int main() {
	int cnt = 0;  int p[2] = { -1,1 };
	cin >> N >> A >> B;
	for (int i = 1; i <= N; ++i) {	
		cin >> K[i];
	}
	fl t = { A};
	memset(ans, -1, sizeof(ans));
	s.push(t);
	ans[A] = 0;
	while (!s.empty()) {
		int uf = s.front().f; int un = K[uf];
		if (uf == B) break;
		for (int i = 0; i < 2; i++) {
			x = uf + p[i] * un;
			if (x > 0 && x <= N && ans[x] == -1) {
				cnt = ans[uf], ans[x] = cnt + 1;
				t = {x};
				s.push(t);
			}
		}
			s.pop();
	}
	cout << ans[B];
	return 0;
}