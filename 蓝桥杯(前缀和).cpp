#include <iostream>
using namespace std;
const int maxn = 1005;
int A[maxn];
int main()
{
  int t = 0,m,n;
  int l,r,ans = 0;
  cin >> n >> m;
  for(int i = 1; i <= n; ++i){
    cin >> t;
    A[i] = A[i-1]+t;
  }
  for(int i = 1; i <= m;++i){
    cin >> l >> r;
    ans = A[r]-A[l-1];
    cout<<ans<<endl;
    ans = 0;
  }
  cout << ans;
  return 0;
}