#include<iostream>
#include<queue>
using namespace std;
const int maxn = 1e7;
const int hh = 999983;
int vis[maxn],a[10],b[10];
queue<int>s;
int step[4] = {1,-1,2,-2};
int cnt[maxn];
int pos[maxn];
int has(int x){
	int sum = 0;
	for(int i = 8; i >= 0;--i){
	  b[i] = x % 10;
	  x/=10;
}
	for(int i = 0; i < 9;++i)
		sum = sum * 131 % hh + b[i]%hh;
	return sum % hh;
}
int change1(){
	int sum = 0;
	for(int i = 0; i < 9;++i)
	sum = sum * 10 + a[i];
	return sum;
}
void change2(int x){
	for(int i = 8; i >= 0;--i){
	  a[i] = x % 10;
	  x/=10;
}
}
int bfs(){
	  int now;
	  int pos0 = 0;
	  while(!s.empty()){
	  	now = s.front();
	  	int nowkey = has(now);
	  	pos0 = pos[nowkey];
	  	change2(now);
	  	for(int i = 0; i < 4;++i){
	  		  int xx = (pos0 + step[i] + 9)%9;
	  		  swap(a[pos0],a[xx]);
	  		  int xt = change1();
	  		  int key = has(xt);
	  		  if(!vis[key]){
	  		  cnt[key] = cnt[nowkey] + 1;
	  		  if(xt == 87654321)
	  		   return cnt[key];
	  		   s.push(xt);
	  		   pos[key] = xx;
	  		   vis[key] = 1;
	  	}
	  	swap(a[pos0],a[xx]);
		  }
		  s.pop();
	  }
	  return 0;
}
int main(){
	int tem = 12345678;
	s.push(tem);
	vis[has(tem)] = 1;
	pos[has(tem)] = 0;
	cout << bfs();
}