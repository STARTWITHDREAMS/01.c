#include<iostream>
#include<algorithm>
using namespace std;
int N, C; long long home[1000005]; 
int Find(int x,int left,int right)//寻找第一个比目标大的数组成员；
{
	int mid = 0; int ans = 0;
	if (home[N] < x)
		return 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (home[mid] >= x)
			ans = mid, right = mid - 1;
		else
			left = mid + 1;
	}
	return ans;
}
int f(long long x)//判断在贪心算法下是否可以为每一个牛都安排隔间；
{
	int t = 1; int cnt = 0;
	for (int i = 1; i <= C - 1; i++)
	{
		cnt = Find(home[t] + x, t, N);
		if (cnt > N||cnt == 0)
			return 0;
		else
		{
			x = home[cnt] - home[t];
			t = cnt;
		}
	}
	return 1;
}
int main()
{
	long long min = 0; long long max = 0; long long mid = 0; long long ans = 0;
	cin >> N >> C;
	for (int i = 1; i <= N; i++)
		cin >> home[i];
	sort(home + 1, home + 1 + N);
	min = home[2] - home[1];
	max = home[N] - home[1];
	while (min <= max)
	{
		mid = min + (max - mid) / 2;
		if (f(mid))
			ans = mid, min = mid + 1;
		else
			max = mid - 1;
	}
	cout << ans;
	return 0;
}
