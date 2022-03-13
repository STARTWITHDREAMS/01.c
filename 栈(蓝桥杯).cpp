#include <iostream>
using namespace std;
const int maxn = 1005;
string stack[maxn];
int top;
bool in(string name){
  if(top >= maxn)
    return false;
  else
      stack[++top] = name;
    return true; 
}
bool empty(){
  if(top > 0)
    return false;
  else 
     return true;
}
bool out(string name){
  if(!empty())
      {
        while(!empty() && stack[top--] == name);
      }
  else
    return false;
  return true;
}
string gettop(){
    return stack[top];
}
int main()
{
  int N;
  string op,name;
  cin >> N;
  while(N--){
    cin >> op >> name;
    if(op == "in")
        in(name);
     else
        out(name);
  }
  if(empty())
    cout << "Empty";
  else
    cout << gettop();
  return 0;
}