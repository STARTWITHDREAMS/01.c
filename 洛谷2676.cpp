#include <iostream>
#include <algorithm>
using namespace std;
int cow[20001];
int main()
{
	int N = 0; long long B = 0; int sum = 0;
	cin >> N >> B;
	for(int i = 0; i < N; i++)
		cin >> cow[i];
	sort(cow, cow + N, 1);
	for (int i = 0; i < N; i++)
	{
		sum += cow[i];
		if (sum >= B)
		{
			cout << i;
			break;
		}
	}
	return 0;
}
