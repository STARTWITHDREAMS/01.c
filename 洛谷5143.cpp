#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef struct
{
	int x;
	int y;
	int z;
}
climber;
climber a[50001];
bool tmp(climber x, climber y)
{
	if (x.z != y.z)
		return x.z < y.z;
}
int main()
{
	int N = 0; double sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
			cin >>  a[i].x>>a[i].y>>a[i].z;
	sort(a, a + N, tmp);
	for (int i = 0; i < N - 1; i++)
		sum += sqrt(pow(a[i].x - a[i + 1].x, 2) + pow(a[i].y - a[i + 1].y, 2) + pow(a[i].z - a[i + 1].z, 2));
	printf("%.3f\n",sum);
	return 0;
}