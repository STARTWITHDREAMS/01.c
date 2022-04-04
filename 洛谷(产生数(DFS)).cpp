#include<bits/stdc++.h>
using namespace std;
string s;
int k;
vector<int>a[11];
int ans[31],vis[11],p[31],nums[31];
void change(string x){
	for(int i = 0 ; i < x.length();++i)
		nums[i] = x[i] - '0';
}
void dfs(int x,int y){
	for(int i = 0; i < a[x].size();++i){
		if(!vis[a[x][i]]){
			ans[y]++;
			vis[a[x][i]] = 1;
			dfs(a[x][i],y);
		}
	}
}
void mul(int x){
	int dw = 0;
	for(int i = 31; i >= 1;--i){
		p[i] = p[i] * x + dw;
		dw = p[i] / 10;
		p[i] %= 10;
	}
}
int main(){
	cin >> s >> k;
	int m,n;
	int len = s.length();
	p[31] = 1;
	change(s);
	for(int i = 1; i <= k;++i){
		cin >> m >> n;
		a[m].push_back(n);
	}
	for(int i = 0; i < len;++i){
		ans[i] = 1;
		vis[nums[i]] = 1;
		dfs(nums[i],i);
		memset(vis,0,sizeof(vis));
		mul(ans[i]);
	}
	int l = 1;
	for(;p[l] == 0;l++);
	for(int i = l; i <= 31; ++i)
	cout << p[i];
}