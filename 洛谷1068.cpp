#include<iostream>
#include<algorithm>
using namespace std;
typedef struct
{
	int ID;
	int grade;
}
applicant;
applicant A[50001];
bool tmp(applicant a, applicant b)
{
	if (a.grade != b.grade)
		return a.grade > b.grade;
	if (a.ID != b.ID)
		return a.ID < b.ID;
}
int main()
{
	int n = 0, m = 0,t = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> A[i].ID >> A[i].grade;
	t = 1.5 * m;
	sort(A, A + n, tmp);
	cout << A[t-1].grade << ' ';
	for (int i = 1.5 * m;; i++)
	{
		if (A[i ].grade != A[i-1].grade)
			break;
		t++;
	}
	cout << t << endl;
	for (int i = 0; i < t; i++)
		cout << A[i].ID << ' ' << A[i].grade << endl;
	return 0;
}