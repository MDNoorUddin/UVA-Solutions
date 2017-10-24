#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[51];
void sieve()
{
    a[0]=1;
    a[1]=2;
    for(int i=2;i<51;i++)
        a[i]=a[i-1]+a[i-2];
    return;
}
int main()
{
    sieve();
    int n;
    scanf("%d",&n);
    int I=1;
    int fib;
    while(n--)
    {
        scanf("%d",&fib);
        printf("Scenario #%d:\n",I++);
        cout<<a[fib]<<endl<<endl;
    }
    return 0;
}
