#include<iostream>
#include<vector>
using namespace std;
int n, q;
int main() {
	int d, h, s, k = 0;
	cin >> n >> q;
	vector<vector<int>>locker(n + 1);
	for (int i = 1; i <= q; i++) {
		cin >> d;
		if (d == 1) {
			cin >> h >> s >> k;
			if (locker[h].size() < s) {
				locker[h].resize(s);
			}
			locker[h][s-1] = k;
		}
		else {
			cin >> h >> s;
			cout << locker[h][s-1]<<endl;
		}
	}
	return 0;
}