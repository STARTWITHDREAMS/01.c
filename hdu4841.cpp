#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int main(){
	int m,n;
	while(cin >> n >> m ){
		a.clear();
		for(int i = 0; i < 2*n; ++i)
		a.push_back(i);
		int pos = 0;
		for(int i = 0; i <n ; ++i){
			pos = (pos+m-1)%a.size();
			a.erase(a.begin()+pos);
		}
		int j = 0;
		for(int i = 0; i < 2*n;++i){
			if(!(i%50)&&i) cout << endl;
			if(j < a.size()&&a[j] == i)
		 		cout << 'G',++j;
			else
		 		cout << 'B';
	}
	}
	return 0;
}