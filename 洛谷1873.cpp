#include<iostream>
using namespace std;
long long H[1000005], M; int N;
int Sum(long long h)
{
	long long sum = 0;
	for (int i = 1; i <= N; i++)
		if (H[i] > h)
			sum += H[i] - h;
	if (sum >= M)
		return 1;
	else 
		return 0;

}
long long find(long long left, long long right )
{
	long long mid = 0; int ans = 0;
	while(left <= right)
	{
		mid = left + (right - left) / 2;
		if (Sum(mid))
			ans = mid,left = mid + 1;
		else 
			right = mid - 1;
	}
	return ans;
}
int main()
{
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		cin >> H[i];
	cout << find(0, 1000000000);
	return 0;
}