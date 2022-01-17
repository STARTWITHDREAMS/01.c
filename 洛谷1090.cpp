#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n, a[10010],b[10010];
int main()
{
	int sum = 0,n2 = 0;
	cin >> n;
	memset(a, 127, sizeof(a));
	memset(b, 127, sizeof(b));
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int i = 0,j = 0, w = 0;
	for (int k = 1; k < n; k++)
	{
		w = a[i] < b[j] ? a[i++] : b[j++];
		w += a[i] < b[j] ? a[i++] : b[j++];
		b[n2++] = w;
		sum += w;
	}
	cout << sum;
	return 0;
}