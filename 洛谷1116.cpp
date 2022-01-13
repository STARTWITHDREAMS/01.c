#include<algorithm>
#include<iostream>
using namespace std;
int train[10001];
int main()
{
	int N = 0; int ans = 0; int tmp = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> train[i];
	for(int i = 0; i < N-1; i++)
		for (int j = N - 1; j > i; j--)
		{
			if (train[j] < train[j - 1])
			{
				tmp = train[j];
				train[j] = train[j-1];
				train[j-1] = tmp;
				ans++;
			}
		}
	cout << ans;
}