#include<iostream>
using namespace std;
int a[14]; int ans; int n;
int b1[30], b2[30], b3[30];
void f(int x)
{
	if (x > n)
	{
		ans++;
		if (ans <= 3)
		{
			for (int i = 1; i <= n; i++)
				cout << a[i] << ' ';
			cout << '\n';
		}
		return;
	}
	for(int i = 1; i <= n;i++)
		if (b1[i] == 0 && b2[x + i] == 0 && b3[x - i + 15] == 0)
		{
			a[x] = i;
			b1[i] = 1; b2[x + i] = 1; b3[x - i + 15] = 1;
			f(x + 1);
			b1[i] = 0; b2[x + i] = 0; b3[x - i + 15] = 0;
		}
}
int main()
{
	cin >> n;
	f(1);
	cout << ans;
	return 0;
}