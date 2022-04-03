#include<iostream>
#include<cstring>
using namespace std;
string A;
int sum[1000005];
int main(){
	cin >> A;
	int ans = 0;
	int len = A.length();
	for(int i = 1; i <= len;++i){
		if(A[i-1] == 'G')
		sum[i] = sum[i-1]+1;
	    else
	    sum[i] = sum[i-1]-1;
	}
	int m[2*len+2] = {0};
	memset(m,-1,sizeof(m));
	m[len+1] = 0;
	for(int i = 1; i <= len;++i){
		if(m[len+1+sum[i]]>=0)
		ans = max(ans,i-m[len+1+sum[i]]);
		else
		m[len+1+sum[i]] = i;
}
	  cout << ans;
	  return 0;
}