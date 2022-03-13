#include<iostream>
using namespace std;

const int QueueSize=10005;
string Vqueue[QueueSize];
int Vhead;
int Vtail;
string Nqueue[QueueSize];
int Nhead;
int Ntail;

bool in(string name,string type)
{
    if(type=="V"){
        if ((Vtail+1) % QueueSize ==Vhead) return false;
        //队列以达到容量上限满了，所以不能再插入了返回错误；
        else{
            Vtail=(Vtail+1) % QueueSize;
            Vqueue[Vtail]=name;
            return true;
       }
    }
    else
    {
        if ((Ntail+1) % QueueSize ==Nhead) return false;
        //队列以达到容量上限满了，所以不能再插入了返回错误；
        else{
            Ntail=(Ntail+1) % QueueSize;
            Nqueue[Ntail]=name;
            return true;
       }
    }
}

bool out(string type)
{
    if(type=="V"){
        if (Vtail==Vhead) return false;
        //空队列不能出队列了

        else {
            Vhead=(Vhead+1) % QueueSize;
             //不是空队列，但是因为是循环的，如果到了数组末尾也要调整到前面去。
            return true;
        }
    }
    else
    {
        if (Ntail==Nhead) return false;
        //空队列不能出队列了

        else {
            Nhead=(Nhead+1) % QueueSize;
             //不是空队列，但是因为是循环的，如果到了数组末尾也要调整到前面去。
            return true;
        }
    }
}

string  getHead(string type)
{
    if(type=="V"){
        if (Vtail==Vhead) return "";//空队列返回空
        else {
            return Vqueue[Vhead+1];
        }
    }
    else
    {
        if (Ntail==Nhead) return "";//空队列返回空
        else {
            return Nqueue[Nhead+1];
        }
    }
}
int main()
{
    int M;
    cin>>M;

    while(M--) //
    {
        string op,name,type;
        cin>>op;
        if(op=="IN")
        {
            cin>>name>>type;
            in(name,type);
        }
        else
        {
            cin>>type;
             out(type) ;
        }
    }

    while(getHead("V")!="")
    {
        cout<<getHead("V")<<endl;;
        out("V");
    }

    while(getHead("N")!="")
    {
        cout<<getHead("N")<<endl;
        out("N");
    }

}