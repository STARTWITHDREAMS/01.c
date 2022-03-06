#include <iostream>
using namespace std;
const int maxn = 3e4 + 15;
int nums[maxn];
bool f[maxn];
int n;
    bool canJump() {
        f[0] = true;
        for(int i = 1;i < n;++i){
            for(int j = i-1; j >= 0; --j){
                if(f[j] == true&&i-j <= nums[j])
                    {f[i]= true;break;}
            }
            if(!f[i])
                return false;
        }
        return f[n-1];
    }
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> nums[i];
	cout << canJump();
	return 0;
}