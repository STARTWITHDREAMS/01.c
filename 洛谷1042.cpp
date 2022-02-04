#include<iostream>
#include<cmath>
using namespace std;
int a[2500 * 25 + 25]; int n = 0; int f[2] = { 11,21 };
int main()
{
	char tmp; 
	while (1)
	{
		cin >> tmp;
		if (tmp == 'E')
			break;
		else if (tmp == 'W')
			a[n++] = 1;
		else if (tmp == 'L')
			a[n++] = 0;
	}
	for (int k = 0; k < 2; k++)
	{
		int w = 0; int l = 0; int flag = 0;
		for (int i = 0; i < n; i++)
		{
			w += a[i]; l += 1 - a[i];
			if ((max(w, l) >= f[k]) && abs(w - l) >= 2)
			{
				cout << w << ":" << l << endl;
				w = l = 0;
				flag = 1;
				if (i == n - 1)
					break;
			}
			flag = 0;
		}
		cout << w << ":" << l << endl;
		if(k == 0)cout << endl;
	}
	return 0;
}