#include <iostream>
using namespace std;
char s[8];
int nums[8];
int t;
int flag;
void dfs(int x){
  if(x == 7 && t == 42)
     {flag = 1; return;}
  else if(x == 7)
      return;
  else
      for(int i = 1; i <= 4; ++i){
        if(flag)
          return;
        else{
          if(i == 1){
            t = t + nums[x];
            dfs(x + 1);
            t -= nums[x];
          }
           else if(i == 2){
            t -= nums[x];
            dfs(x+1);
            t+=nums[x];
           }
           else if(i == 3){
             t *= nums[x];
             dfs(x + 1);
             t/= nums[x];
           }
           else{
             int m = t % nums[x-1];
             t /= nums[x-1];
              dfs(x+1);
                t = t * nums[x-1] + m;
           }
        }
      }
}
int main()
{
  for(int i = 1; i <= 6;++i)
    cin >> s[i];
  for(int i = 1; i <= 6; ++i)
    if(s[i] == 'A')
    nums[i] = 1;
    else if(s[i] == 'J')
    nums[i]  = 11;
    else if(s[i] == 'Q')
    nums[i] = 12;
    else if(s[i] == 'K')
    nums[i] = 13;
    else
    nums[i] = s[i] - '0'; 
    t = nums[1];
     dfs(2);
    if(flag)
      cout << "YES";
    else
      cout << "NO";
  return 0;
}