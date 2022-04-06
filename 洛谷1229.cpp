#include<iostream>
using namespace std;
string s1,s2;
int cnt;
int main(){
	cin >> s1 >> s2;
	int len = s1.size();
	for(int i = 0; i < len - 1;++i)
		for(int j = 1; j < len;++j)
			if(s2[j] == s1[i]){
				if(s2[j-1] == s1[i+1])
				cnt++;
			break;
		}
		cout << (1 << cnt);
return 0;
}