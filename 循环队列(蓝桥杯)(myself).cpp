#include<iostream>
using namespace std;
const int maxn = 10005;
string Vqueue[maxn];
int Vtail,Vhead;
string Nqueue[maxn];
int Ntail,Nhead;
bool in(string name,string type){
  if (type == "V"){
      if((Vtail + 1) % maxn == Vhead)
      return false;
     else{
       Vqueue[Vtail] = name;
       Vtail = (Vtail + 1) % maxn;
     }
  }
  else {
      if ((Ntail + 1) % maxn == Nhead)
          return false;
      else {
          Nqueue[Ntail] = name;
          Ntail = (Ntail + 1) % maxn;
      }
  }
  return true;
}
bool out(string type){
  if(type == "V"){
    if(Vtail == Vhead)
        return false;
    else
        Vhead = (Vhead + 1) % maxn;
  }
  else {
      if (Ntail == Nhead)
          return false;
      else
          Nhead = (Nhead + 1) % maxn;
  }
  return true;  
}
string gethead(string type){
    if (type == "V") {
        if (Vhead != Ntail)
            return Vqueue[Vhead];
        else
            return "";
    }
    else {
        if (Nhead != Ntail)
            return Nqueue[Nhead];
        else
            return "";
    }
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
    else{
      cin >> type;
      out(type);
    }
  }
  while (gethead("V") != "")
  {
      cout << gethead("V") << endl;
      out("V");
  }

  while (gethead("N") != "")
  {
      cout << gethead("N") << endl;
      out("N");
  }
  return 0;
}