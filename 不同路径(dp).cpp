#include <iostream>
using namespace std;
const int maxn = 105;
int f[maxn][maxn];
int main(){
    int m,n;
    cin >> m >> n;
    f[1][0] = 1;
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= n; ++j){
            if(i == 1)
                f[i][j] = f[i][j-1];
            else if(j == 1)
                f[i][j] = f[i-1][j];
            else 
                f[i][j] = f[i][j-1] + f[i-1][j];
        }
    cout << f[m][n];
    return 0;
}