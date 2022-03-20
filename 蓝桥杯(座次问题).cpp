#include <iostream>
using namespace std;
string s[12];
bool chosen[12];
string ans[12];
int n;
void dfs(int x){
	if(x == n + 1){
		for(int i = 1; i <= n; ++i)
		cout << ans[i] << ' ';
		cout << endl;
		return;
	}
	else{
		for(int i = 1; i <= n; ++i){
			if(!chosen[i]){
				chosen[i] = 1;
				ans[x] = s[i];
				dfs(x + 1);
				chosen[i] = 0;
			}
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; ++i)
		cin >> s[i];
	dfs(1);
	return 0;
}