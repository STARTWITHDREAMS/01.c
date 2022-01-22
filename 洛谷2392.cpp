#include<iostream>
using namespace std;
int ans, nowtime, maxtime,maxdeep,sum, s[4], a[21];
void dfs(int x)
{
	if (x > maxdeep)
	{
		maxtime = max(maxtime, nowtime);
		return;
	}
	if (nowtime + a[x] <= sum/2)
	{
		nowtime += a[x];
		dfs(x + 1);
		nowtime -= a[x];
	}
	dfs(x + 1);
}
int main()
{
	for (int i = 0; i < 4; i++)
		cin >> s[i];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= s[i]; j++)
			cin >> a[j],sum+=a[j];
		maxdeep = s[i];
		dfs(1);
		ans += sum - maxtime;
		sum = 0;
		maxtime = 0;
		nowtime = 0;
	}
	cout << ans;
	return 0;
}