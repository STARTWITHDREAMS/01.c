#include <iostream>
#include <cstring>
using namespace std;
string A;
long long N;
long long f(long long x) {
	if (x <= A.length() - 1)
		return x;
	long long t = A.length() - 1;
	while (t < x)
		t *= 2;
	if (t == x)
		f(t/2 - 1);
	else if ( x - t/2 == 1)
		f(x - 1);
	else
		f(x - t/2 - 1);
}
int main() {
	cin >> A >> N;
	A = ' ' + A;
	cout << A[f(N)];
	return 0;
}