#include<iostream>
#include<algorithm>
using namespace std;
struct student
{
	string name;
	int y;
	int m;
	int day;
	int order;
}a[101];
bool tmp( student x,  student z)
{
	if (x.y != z.y)  return x.y > z.y;
	if (x.m != z.m) return x.m > z.m;
	if (x.day != z.day)return x.day > z.day;
	else
		return x.order < z.order;
}
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].name >> a[i].y >> a[i].m >> a[i].day;
		a[i].order = i;
	}
	sort(a, a + n, tmp);
	for (int i = n-1; i >= 0; i--)
		cout << a[i].name << endl;
	return 0;
}