#include <iostream>
#include <vector>
using namespace std;
vector <char> a;
char tmp;
int main() {
	int cnt1 = 0, cnt2 = 0;
	while (1) {
		tmp = getchar();
		if (tmp == ' ' || tmp == '\n') {
			reverse(a.begin() + cnt1, a.begin() + cnt2);
			a.push_back(tmp);
			cnt1 = cnt2 + 1;
			cnt2++;
			if (tmp == '\n')
				break;
		}
		else {
			cnt2++;
			a.push_back(tmp);
		}
	}
	for (int i = 0; i < cnt2; ++i)
		cout << a[i];
	return 0;
}