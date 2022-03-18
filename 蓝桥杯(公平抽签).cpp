#include <iostream>
using namespace std;
string a[10005];
string ans[10005];
int m,n,cnt,t,v[10005];
void dfs(int x){
  if( t > m || t + (n - x + 1) < m)
  	return;
	if(x == n + 1){
		for(int i = 0; i < m; ++i)
			ans[cnt] += a[v[i]] + ' ';
      cnt++;
			return;
	}
	else{
		dfs(x+1);
		v[t++] = x;
		dfs(x+1);
		t--;
}
}
int main()
{
 cin >> n >> m;	
 for(int i = 1; i <= n; ++i)
 	cin >> a[i];
 dfs(1);
 for(int i = cnt - 1; i >= 0;--i)
 cout << ans[i] << endl;
  return 0;
}