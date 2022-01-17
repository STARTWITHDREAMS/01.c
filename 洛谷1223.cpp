#include <iostream>
#include <algorithm>
using namespace std;
int n;double sum;
struct timel
{
	int tm;
	int s;
}T[1001];
bool cmsp(timel a,timel b)
{
	return a.tm < b.tm;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> T[i].tm,T[i].s = i+1;
	sort(T, T + n,cmsp);
	for (int i = 0;i < n; i++)
		cout << T[i].s << ' ',sum+=T[i].tm*(n-i-1);
	printf("\n%.2f",sum/n);
}