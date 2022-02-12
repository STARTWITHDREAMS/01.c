#include <iostream>
using namespace std;
long long F[1000005], G[1000005];
int main() {
	int n;
	cin >> n;
	F[0] = 1; F[1] = 1; G[1] = 1;
	for (int i = 2; i <= n; ++i) {
		F[i] = ((F[i - 2] + F[i - 1]) % 10000 + 2 * G[i - 2] % 10000) % 10000;
		G[i] = (F[i - 1] + G[i - 1])%10000;
	}
	cout << F[n];
	return 0;
}