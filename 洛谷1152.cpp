#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[10001], b[10001];
int main()
{
	int n = 0; int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
		b[i] = abs(a[i] - a[i + 1]);
	sort(b, b + n - 1);
	cnt = unique(b, b + n - 1) - b;
	if (b[0] == 1 && cnt == n - 1)
		cout << "Jolly";
	else
		cout << "Not Jolly";
	return 0;
}