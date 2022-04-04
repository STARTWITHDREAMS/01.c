//#include<bits/stdc++>
#include <iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int p[33];
int len;
vector<int>b[10];
queue<int>c;
queue<int>empty1;
string s;
int nums[16][2];
int k;
int a[32];
int ans[32];
int vis[11];
void mul(int x){
	int dw = 0;
	for(int i = 31; i >= 1;--i){
		p[i] = p[i] * x + dw;
		dw = p[i]/10;
		p[i] = p[i]%10;
	}
}
void deal(string x){
	for(int i = 0; i < len;++i)
	a[i] = s[i]-'0';
}
void bfs(int x){
	while(!c.empty()){
		int t = c.front();
		c.pop();
		ans[x]++;
		for(int i = 0; i < b[t].size();++i){
			if(!vis[b[t][i]]){
			c.push(b[t][i]);
			vis[b[t][i]] = 1;
		}
		}
	}
}
int main(){
	int m,n;
	long long sum = 1;
   cin >> s >> k;
   len = s.length();
	for(int i = 1; i <= k;++i){
		cin >> m >> n;
		b[m].push_back(n);
	}
	deal(s);
	for(int i = 0; i < len;++i){
		vis[a[i]] = 1;
		c.push(a[i]);
		bfs(i);
		c = empty1;
		memset(vis,0,sizeof(vis));
	}
	p[31] = 1;
	for(int i = 0; i < len;++i)
   			mul(ans[i]);
   	int l = 1;
   	for(;p[l] == 0;++l);
   	for(int i = l; i <= 31;++i)
   	cout << p[i];
	return 0;
}