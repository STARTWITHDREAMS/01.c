//洛谷p1928压缩字符串
#include <iostream>
using  namespace std;
string expand()
{
    string s = "", x; char c; int D;
    while(cin >> c)
    {
        if(c == '[')
        {
            cin >> D;
        x = expand();
        while(D--)
            s += x;
        }
        else if(c == ']')
            return s;
        else s += c;
    }
    return s;
}
int main()
{
    cout << expand() ;
    return 0;
}
