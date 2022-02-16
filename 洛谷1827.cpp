#include <iostream>
#include <cstring>
using namespace std;
string A, B;
int len;
void build(int obj,int l2, int r2) {
	for (int i = l2; i <= r2; ++i) 
		if (B[obj] == A[i]) {
			build(obj + 1, l2, i - 1);
			build(obj + i - l2 + 1, i + 1, r2);
			cout << A[i];
			return;
		}
}
int main() {
	cin >> A >> B;
	build(0, 0, A.length()-1);
	return 0;
}