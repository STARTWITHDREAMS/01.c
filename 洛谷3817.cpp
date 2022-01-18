#include<iostream>
using namespace std;
long long a[100010];
int main()
{
	int n, x, t;long long ans = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] + a[i + 1] > x)
		{
			t = a[i] + a[i + 1] - x;
			if (a[i + 1] > t)
				a[i + 1] -= t;
			else
				a[i + 1] = 0;
			ans += t;
		}
	}
	cout << ans;
	return 0;
}