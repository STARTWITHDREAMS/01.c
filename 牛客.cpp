#include <iostream>
using namespace std;
#include <string>
string A; int N, L, R, t1, t2, t3, t4, flag, t; long long ans;
int main() {
    cin >> N >> L >> R;
    getline(cin, A);
    getline(cin, A);
    if (N < L || R < 3)
    {
        cout << 0; return 0;
    }
    for (int i = 0; i <= N - L; ++i) {
        t = 0;
        for (int j = i + L - 1; j <= i + R - 1 && j < N; j++) {
            for (int k = i; k <= j; k++) {
                if (A[k] >= '0' && A[k] <= '9')
                {
                    t1++; if (t1 == 1)  flag++, t1++;
                }
                else if (A[k] >= 'a' && A[k] <= 'z')
                {
                    t2++; if (t2 == 1) flag++, t2++;
                }
                else if (A[k] >= 'A' && A[k] <= 'Z')
                {
                    t3++; if (t3 == 1)flag++, t3++;
                }
                else { t4++; if (t4 == 1) flag++, t4++; }
                if (flag >= 3) {
                    ans += min(i + R, N) - j;
                    t = 1;
                    break;
                }
            }
            t1 = 0; t2 = 0; flag = 0; t3 = 0; t4 = 0;
            if (t) break;
        }
    }
    cout << ans;
    return 0;
}