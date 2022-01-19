#include<iostream>
using namespace std;
char map[12][12]; int cnt[12][12];
int main()
{
	int x = 0, y = 0; int flag = 1; int ans = 0;
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			cin >> map[i][j];
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
		{
			x = i; y = j;
			cnt[x][y]++;
			while (map[x][y])
			{
				if (map[x][y] == 'U')
					x--;
				else if (map[x][y] == 'D')
					x++;
				else if (map[x][y] == 'L')
					y--;
				else
					y++;
				cnt[x][y]++;
				if (cnt[x][y] == 2)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				ans++;
			flag = 1;
			memset(cnt, 0, sizeof(cnt));
		}
	cout << ans;
	return 0;
}