#include <iostream>
using namespace std;
const int maxn = 100005;
int N,K;
int H[maxn],W[maxn];
int main(){
	int maxline = 0;
	cin >> N >> K;
	for(int i = 1;i <= N;++i){
	cin >> H[i] >> W[i];
	maxline = max(maxline,max(H[i],W[i]));
	}
	int l = 1; int r = maxline;  int ans = 0;
	while(l <= r){
		int mid = (l+r)/2;
		int sum = 0;
		for(int i = 1; i <= N;++i)
			sum+=H[i]/mid+W[i]/mid;
		if(sum >= K){
			ans = mid;
			l = mid + 1;
		}
		else
		 r = mid - 1;
	}
	cout << ans;
	return 0;
}