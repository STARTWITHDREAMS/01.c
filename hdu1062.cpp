#include<bits/stdc++.h>
using namespace std;
stack <char> s;
int main(){
	char ch;
	while(1){
		ch = getchar();
		if(ch == ' '|| ch == '\n'||ch == EOF){
			while(!s.empty()){
			cout << s.top();
			s.pop();
		}
		if(ch == '\n'||ch == EOF)
			break;
		cout << ' ';
		}
		else
			s.push(ch);
	}
	return 0;
}