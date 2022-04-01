#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 10005;
int m,n,p,q;
struct lcd{
	int x1,y1,x2,y2;
}L[1000005];
int crimer[maxn][maxn];
void add(int x1,int x2,int y1,int y2,int c){
	crimer[x1][y1] += c;
	crimer[x1][y2+1] -= c;
	crimer[x2+1][y1]-=c;
	crimer[x2+1][y2+1] += c;
}
int main(){
	int sx1,sy1,sx2,sy2,flag = 1;
	cin >> m >> n;
	cin >> p;
	for(int i = 1; i <= p;++i)
	cin >> L[i].x1 >> L[i].y1 >> L[i].x2 >> L[i].y2;
	cin >> q;
	for(int i = 1;i <= q;++i){
		cin >> sx1 >> sy1 >> sx2 >> sy2;
		add(sx1,sx2,sy1,sy2,1);
		for(int i = 1; i <= p;++i)
		  add(L[i].x1,L[i].x2,L[i].y1,L[i].y2,-1);
		for(int j = sx1;j <= sx2;++j)
			for(int k = sy1;k <= sy2;++k){
				crimer[i][j] += crimer[i-1][j] + crimer[i][j-1] - crimer[i-1][j-1];
				if(crimer[i][j] > 0){
					cout << "NO"<<endl;
					flag = 0;
					break;
				}
			}
			if(flag)
			cout << "YES"<<endl;
			flag = 1;
			memset(crimer,0,sizeof(crimer));
	}
}