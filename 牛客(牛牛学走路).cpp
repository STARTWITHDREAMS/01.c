#include<iostream>
#include<cmath>
using namespace std;
int a[2010 * 2010]; string A;
int main()
{
	int T; int n = 0; double d = 0; double ans = 0;
	cin >> T;
	for(int i = 0; i<T; ++i)
		{
			int x = 1005; int y = 1005;
		cin >> n >> A;
			for(int i = 0; i < n; ++i)
				{
				if(A[i]=='U')
				 x++;
				else if(A[i] == 'D')
					x--;
				else if(A[i] == 'R')
					y++;
				else
					y--;
				ans = max(d,sqrt(pow((x-1005)*1.0,2)+pow((y-1005)*1.0,2)));
				d = ans;
				}
			cout << ans << '\n';	
			d = 0; 
		}	
		return 0;
}