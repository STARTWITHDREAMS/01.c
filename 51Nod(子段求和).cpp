#include <iostream>
using namespace std;
int main(){
	int N,Q,n,l;
	int a[50005],sum[50005];
	a[0] = 0;
	cin >> N;
	for(int i = 1; i <= N;++i){
	cin >> a[i];
	sum[i] = sum[i-1] + a[i-1];
}
   sum[N+1] = sum[N] + a[N];
	cin >> Q;
	for(int i = 1; i <= Q;++i){
		cin >> n >> l;
		cout << sum[n+l] - sum[n] << endl;
	}
	return 0;
}