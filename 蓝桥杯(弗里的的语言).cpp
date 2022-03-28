#include<iostream>
using namespace std;
const int h = 999983;
const int maxn = 1e6 + 5;
string val[maxn];
string upval[maxn];
int hx(string s){
	int sum = 0;
	for(int i = 0; i < s.size();++i){
		sum = sum * 131 % h + (s[i] - 'a' + 1) % h;
	}
	return sum % h;
}
bool solve(string s){
	int n = hx(s);
	int t = 0;
	if(val[n] == ""){
		val[n] = s;
		return false;//没有重复的单词
	}
	else if(val[n] == s)
		return true;
	else{
		for(int i = 0; i <= t; ++i){
			if(upval[i] == s)
			return true;
		}
		upval[t++] = s;
		return false;
	}
}
int main(){
	int m;
	string A;
	bool flag = 0;
	cin >> m;
	for(int i = 0; i < m; ++i){
	 cin >> A;
	 if(solve(A))
	 flag = 1,cout << A << endl;
	}
	if(!flag)
	cout << "NO";
	return 0;
}