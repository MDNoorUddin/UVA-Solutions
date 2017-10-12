#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int high=0,low=0;
        int curr=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>curr)
                high++;
            if(a[i]<curr)
                low++;
            curr=a[i];
        }
        printf("Case %d: %d %d\n",I++,high,low);
    }
    return 0;
}
