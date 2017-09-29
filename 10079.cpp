/************
accepted
************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    while(cin>>x)
    {
        if(x<0)
            break;
        if(x==0)
        {
            cout<<1<<endl;
            continue;
        }
        long long count=0;
        for(long long i=1;i<=x;i++)
        {
            if(i==1)count+=2;
            else count+=i;
        }cout<<count<<endl;
    }
    return 0;
}
