#include <iostream>
#include <algorithm>
using namespace std;
struct stu{
  int s;
  int a;
  int e;
}T[1005];
bool cmp(stu x,stu y){
  return  (x.s + x.a + x.e) < (y.s + y.a + y.e); 
}
int main()
{
  int n;
  long long sum = 0;
  cin >> n;
  for(int i = 0; i < n; ++i)
    cin >> T[i].s >> T[i].a >> T[i].e;
  sort(T,T + n,cmp);
  for(int i = 0; i < n; ++i ){
    for(int j = 0; j < i; ++j)
      sum += T[j].s + T[j].a + T[j].e;
      sum += T[i].s + T[i].a;
  }
  cout << sum;
  return 0;
}