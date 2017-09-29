#include<bits/stdc++.h>
using namespace std;
long long Count=99999999999999999;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {

            int distance=0;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                int g=abs(a[i]-a[j]);
                    distance+=g;
            }
            if(distance<Count)
                Count=distance;
        }
        cout<<Count<<endl;
        Count=99999999999999999;
    }
    return 0;
}
