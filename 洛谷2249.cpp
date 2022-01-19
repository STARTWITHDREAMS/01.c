#include<iostream>
using namespace std;
int n, m;long long a[1000001];
int find(int left,int right, int x)
{
	int mid = 0; int k = 0; 
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (a[mid] < x)
			left = mid + 1;
		else if (a[mid] > x)
			right = mid - 1;
		else
		{
			if (left == right)
				return left;
			else
				right = mid;
		}
	}
		return -1;
}
int main()
{
	int t = 0, ans = 0;
	cin >> n >> m;
	for(int i = 1; i<=n;i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
	{
		cin >> t;
		cout << find(1, n , t)<<' ';
	}
	return 0;
}