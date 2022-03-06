#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e4 + 5;
long long coin[15];
int amount;
int f[maxn];
int main(){
	int n;
    cin >> amount >> n;
    memset(f,0x3f,sizeof(f));
    f[0] = 0;
    for(int i = 1; i <= n; ++i)
            cin >> coin[i];
    for(int i = 1;i <= amount; ++i){
        for(int j = 1; j <= n; ++j){
            if(i >= coin[j])
                    f[i] = min(f[i-coin[j]]+1,f[i]);
        }
    }
   	if(f[amount] == 0x3f3f3f3f)
   		cout << -1;
   	else
   	 cout << f[amount];
   	 return 0;
}