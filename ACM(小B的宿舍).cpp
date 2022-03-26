#include<iostream>
#include<cstring>
using namespace std;
int T,N,s,t;
int room[200];
int main(){
	cin >> T;
	while(T--){
		cin >> N;
	    int maxn = 0;
		for(int i = 1; i <= N;++i){
			cin >> s >> t;
			int from = (s-1)/2;
			int to = (t-1)/2;
			if (from > to)
			swap(from,to);
			for(int j = from; j <= to;++j){
				room[j]++;
				maxn = max(room[j],maxn);
			}
		}
		if(maxn%2 == 1)
			cout << 10 * (maxn/2) + 10 << endl;
		else
		   cout << 10 * (maxn/2) << endl;
		   memset(room,0,sizeof(room));
	}
	return 0;
}