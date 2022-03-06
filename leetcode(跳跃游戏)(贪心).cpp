#include <iostream>
using namespace std;
const int maxn = 3e4 + 15;
int nums[maxn];
int flag;
int main(){
	int n;
	int temp = 1;
	cin >> n;
	for(int i = 1;i <= n; ++i)
		cin >> nums[i];
	for(int i = 1; i  <= n; ++i)
	{
		if(temp >= n){
			cout << "true";
			break;
		}
		if(i <= temp)
			temp = max(temp,nums[i] + i)
		else
		 break;
	}
	  cout << "false";
	return 0;
}