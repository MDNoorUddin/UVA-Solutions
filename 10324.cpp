#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int I=1;
    while(cin>>x)
    {
        printf("Case %d:\n",I++);
        int t;
        cin>>t;
        int a,b;
        while(t--)
        {
            cin>>a>>b;
            if(a>b)
                swap(a,b);
            int diff=b-a+1;
            int sum=0;
            for(int i=a;i<=b;i++)
            {
                sum+=(x[i]-48);
            }
            if(sum==0||sum==diff)
                cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}
