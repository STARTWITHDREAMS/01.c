#include <iostream>
using namespace std;
string A; int k;
int main()
{
	int t, rest, start = 0; int flag = 0; int minp; int cnt = 0;
	cin >> A >> k;
	rest = A.length() - k;
	while (cnt < rest)
	{
		minp = start;
		for (int i = start; i <= start + k; i++)
			if (A[i] < A[minp])
				minp = i;
		if (A[minp]-48)
			flag = 1;
		if (flag)
			cout << A[minp];
		k = k - (minp - start);
		start = minp + 1;
		cnt++;
	}
	if (!flag)
		cout << 0;
	return 0;
}