#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	long long ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n + m + 1;++i)
	cin >> a[i];
	sort(a,a+n+m+1);
	if(m==0){
	for(int i = 0; i < n+m+1;++i)
	ans+=a[i];
	cout<<ans;
}
	else{
		  ans-=a[0]; ans+=a[n+m];
		  for(int i = 1; i < n + m;++i)
		  	if(a[i]<0)
		  	ans-=a[i];
		  	else
		  	ans+=a[i];
		  	cout<<ans;
	}
	return 0;
}