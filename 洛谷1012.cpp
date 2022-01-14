#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool tmp(string a, string b)
{
	int i = 0;
	for ( i = 0; i < min(a.length(), b.length()); i++)
	{
		if (a[i] < b[i])
			return 0;
	}
	if (a.length() < b.length())
	{
		if (a[i - 1] <= b[0])
			return 0;
		else
			return 1;
	}
	if (a.length() > b.length())
	{
		if (a[i] >= b[0])
			return 1;
		else
			return 0;
	}
	return 1;
}
string A[21];
int main()
{
	 int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	sort(A, A + n, tmp);
	for(int i = 0;i<n;i++)
		cout << A[i];
}