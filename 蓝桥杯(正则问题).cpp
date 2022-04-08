#include<bits/stdc++.h>
using namespace std;
string s;
int cnt;
int dfs(){
	int ans = 0,tmp = 0;
	while(cnt < s.size()){
	    if(s[cnt] == '('){
	    cnt++;
	    tmp+=dfs();
		}
	    else if(s[cnt] == '|'){
	    	cnt++;
	    	ans = max(ans,tmp);
	    	tmp = 0;
		}
		else if(s[cnt] == ')'){
			cnt++;
			break;
		}
		else{
			cnt++;
			tmp++;
		}
	}
		return max(ans,tmp);
	}
 int main(){
 	cin >> s;
 	cout << dfs();
 	return 0;
 }
