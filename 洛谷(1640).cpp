#include <iostream>
using namespace std;
#include <queue>
queue <int> word;
int vis[1005];
int m,n;
int main(){
	int ans = 0,flag = 0;
	int t;
	cin >> m >> n;
	for(int i = 1; i <= n;++i){
		flag = 0;
		cin >> t;
			if(vis[t]){
				flag = 1;
			}
			if(flag)
			continue;
			else{
			 if(word.size() < m){
			 	word.push(t);
			 	vis[t] = 1;
			 }	
			 else{
			vis[word.front()] = 0;
			 word.pop();
			 word.push(t);
			 vis[t] = 1;
			}
		 ans++;
		}
	}
	cout << ans;
	return 0;
}