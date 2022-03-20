#include <iostream>
#include <algorithm>
using namespace std;
struct stu{
	int loc;
	int num;
}line[1005],column[1005];
bool cmp1(stu x,stu y){
	return x.num > y.num;
}
bool cmp2(stu x,stu y){
	return x.loc < y.loc;
}
int M,N,K,L,D;
	int x1,x2,y1,y2;
int main(){
	cin >> M >> N >> K >> L >> D;
	for(int i = 1; i <= D;++i){
		cin >> x1 >> y1 >> x2 >> y2;
		if(x1 == x2){
			column[min(y1,y2)].loc = min(y1,y2);
			column[min(y1,y2)].num++;
		}
		else{
		 	line[min(x1,x2)].loc = min(x1,x2);
			 line[min(x1,x2)].num++;	
		}
	}
	sort(line+1,line+1+M,cmp1);
	sort(column+1,column+1+N,cmp1);
	sort(line+1,line+1+K,cmp2);
	sort(column+1,column+1+L,cmp2);
	for(int i = 1;i <= K;++i)
	cout << line[i].loc<< " ";
	cout << endl;
	for(int i = 1; i <= L;++i)
	cout << column[i].loc<<" ";
	return 0;
}