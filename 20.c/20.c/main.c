#include <stdio.h>
long long f[25][25][25] = {0};
 long long w(long long a, long long b, long long c)
 {
     if(a <= 0 || b <= 0 || c <= 0)
         return 1;
     else if(f[a][b][c] == 0)
     {
         if (a > 20 || b > 20 || c > 20)
             return f[a][b][c] = w(20, 20, 20);
         else if (a < b && b < c)
             return f[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a, b-1, c);
         else return f[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1)
             - w(a-1,b-1 ,c-1);
     }
     else return f[a][b][c];
 }
 int main()
 {
     long long N[100] = {0};int i = -3;
     do
     {
         i += 3;
     scanf("%lld %lld %lld",&N[i],&N[i+1],&N[i+2]);
     }
     while(N[i]!=-1 || N[i+1]!=-1 || N[i+2]!=-1);
     int flag = i - 3;
     for(int i = 0; i <= flag; i+=3)
         printf("w(%lld,%lld,%lld) = %lld\n",N[i],N[i+1],N[i+2],w(N[i],N[i+1],N[i+2]));
    return 0;
}

