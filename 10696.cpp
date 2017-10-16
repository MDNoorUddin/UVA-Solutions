#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f91(int n);
int main()
{
    int x;
    while(cin>>x&&x)
    {
        int y=f91(x);
        printf("f91(%d) = %d\n",x,y);
    }
    return 0;
}
int f91(int n)
{
    if(n>100)
        return (n-10);
    return f91(f91(n+11));
}
