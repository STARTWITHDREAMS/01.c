#include <iostream>
using namespace std;
int a[5000005]; int n, k;
void qsort(int left, int right) {
	int mid = right + left / 2; int i = left, j = right; int tem;
	do {
		while (a[i] < a[mid]) i++;
		while (a[j] > a[mid]) j--;
		if (i <= j) {
			tem = a[i]; a[i] = a[j]; a[j] = tem; i++; j--;
		}
	} while (i <= j);
	if (k > j && k < i) {
		cout << a[j + 1];
		exit(0);
	}
	else if (k <= j)
		qsort(left, j);
	else
		qsort(i, right);
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	qsort(0, n - 1);
	return 0;
}