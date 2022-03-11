#include <iostream>
using namespace std;
string N[1005];
string V[1005];
int Ntail,Vtail,Nhead,Vhead;
void in(string name,string type){
  if(type == "N")
    N[Ntail++] = name;
  else
    V[Vtail++] = name;
}
bool out(string type){
  if(type == "N")
    if(Ntail == Nhead)
      return false;
    else
        Nhead++;
  else
      if(Vtail == Vhead)
        return false;
      else
        Vhead++;
    return true;

}
void show(string type){
  if(type == "N")
     N[Nhead-1] = " ";
  else
     V[Vhead-1] = " ";
}
int main()
{
  int M;
  string dec,name,type;
  cin >> M;
  while(M--){
      cin >> dec;
      if(dec == "IN"){
        cin >> name >> type;
        in(name,type);
      }
      else if(dec == "OUT"){
        cin >> type;
        if(out(type))
          show(type);
      }
  }
  for(int i = 0;i < Vtail;++i)
    if(V[i]!= " ")
      cout << V[i]<<endl;
   for(int i = 0; i < Ntail;++i)
   	if(N[i] != " ")
   		cout << N[i] << endl;
 return 0;
}