#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        int n,p,q;
        cin>>n>>p>>q;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long sum=0;
        if(p<=n){
        for(int i=0;i<p;i++)
            sum=sum+a[i];
        }
        else
        {
           for(int i=0;i<n;i++)
            sum=sum+a[i];
        }
        int j;
        if(p<=n)
            j=p-1;
        else
            j=n-1;
        while(sum>q)
        {
            sum=sum-a[j--];
        }
        printf("Case %d: %d\n",I++,j+1);
    }
    return 0;
}
