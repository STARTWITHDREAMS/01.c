#include <iostream>
using namespace std;
int ans = -1; long long val = 59084709587505;
void dfs(int x, long long y)
{
    if (y > val)
        return;
    ans++; y *= x;
    for (int i = x; i <= 7; i += 2)
    {
        dfs(i, y/x*i);
    }
}
int main()
{
    dfs(3, 1);
    cout << ans;
    return 0;
}