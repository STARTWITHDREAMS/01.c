#include<iostream>
#include<algorithm>
using namespace std;
struct com
{
	int start;
	int end;
}a[1000002];
bool cmp(com a, com b)
{
	return a.end < b.end;
}
int main()
{
	int n = 0, ans = 0; int finish = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].start >> a[i].end;
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++)
		if (finish <= a[i].start)
			ans++,finish = a[i].end;	
	cout << ans;
	return 0;
}