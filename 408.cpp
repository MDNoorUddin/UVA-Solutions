#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b));}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int g=gcd(a,b);
        if(g==1)
            printf("%10d%10d    Good Choice\n\n",a,b);
        else
            printf("%10d%10d    Bad Choice\n\n",a,b);
    }
}
