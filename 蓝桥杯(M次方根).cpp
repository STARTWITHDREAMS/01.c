#include<iostream>
using namespace std;
const double dn = 1e-9;
int N,M;
bool judge(double x){
	double mul = 1;
	for(int i = 1; i <= M;++i)
		{mul *= x;
		if(mul > (double)N)
		break;
	}
	if(mul <= (double)N)
	return true;
	else
	return false;
}
int main(){
	cin >> N >> M;
	double ans = 0;
    double l = 1; double r = N;
    while(l <= r){
    	double mid = (l+r)/2;
        if (judge(mid)){
        	ans = mid;
        	l = mid + dn;
        }
    	else
    		r = mid - dn;
	}
	printf("%.7f",ans);
	return 0;
}