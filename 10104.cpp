#include <bits/stdc++.h>
using namespace std;
int xGCD(int a, int b, int &x, int &y) {
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }
    int x1, y1, gcd = xGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}
int main()
{
   int a,b, x, y, gcd;
   while(cin>>a>>b){
   gcd = xGCD(a, b, x, y);
   printf("%d %d %d\n",x,y,gcd);
   }
   return 0;
}
