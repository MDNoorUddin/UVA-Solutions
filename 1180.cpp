#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if(a==1)
    return 0;
    if(a==2)
    return 1;
    if(a%2==0)
    return 0;
    for(int i=3;i<=sqrt(a);i+=2)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int p,pr;
         scanf("%d,",&p);
        pr=pow(2,p)-1;
        if(isPrime(p)&&isPrime(pr))
            printf("Yes\n");
        else printf("No\n");
    }
}
