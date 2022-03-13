#include <iostream>
#include <stack>
using namespace std;
stack <string> clo;
int main()
{
  int N;
  string op,name;
  cin >> N;
  while(N--){
    cin >> op >> name;
    if(op == "in"){
        clo.push(name);
    }
    else{
      while(!clo.empty()){
        if(clo.top() == name){
          clo.pop();
          break;
        }
        clo.pop();
      }
    }
  }
  if(clo.empty())
    cout << "Empty";
  else
    cout << clo.top();
  return 0;
}