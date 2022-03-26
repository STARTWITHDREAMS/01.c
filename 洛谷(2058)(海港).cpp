#include <iostream>
using namespace std;
#include <queue>;
struct ship{
	int t,x;
};
int vis[100005];
queue <ship> a;
int main(){
	int n,m;
	cin >> n;
	ship s;
	int ans = 0;
	int tmp;
	for(int i = 1; i <= n;++i){
		cin >> tmp >> m;
		for(int j = 1; j <= m;++j)
			{  s.t = tmp;
			   cin >> s.x;
				if(!vis[s.x])
				ans++;
				vis[s.x]++;
				a.push(s);
			}
		while(a.front().t + 86400 <= s.t){
				vis[a.front().x]--;
				if(!vis[a.front().x])
				ans--;
				a.pop();
			}
			cout << ans << endl;
	}
	return 0;
}