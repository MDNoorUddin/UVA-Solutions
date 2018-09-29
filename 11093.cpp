#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<map>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n+1);
        vector<ll> b(n+1);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        int index=-1;
        ll sum=0,diff=0;
        for(int i=1;i<=n;i++)
        {
            if(sum+a[i]<diff+b[i])
            {
                index=-1;
                sum=0;
                diff=0;
            }
            else if(index==-1)
            {
                index=i;
                sum+=a[i];
                diff+=b[i];
            }
            else{
                sum+=a[i];
                diff+=b[i];
            }
        }
            if(index==-1)
            {
                printf("Case %d: Not possible\n",I++);
            }
            else
            {
                sum-=diff;
                bool c=false;
                for(int i=1;i<index;i++)
                {
                    sum+=a[i];
                    sum-=b[i];
                    if(sum<0)
                    {
                        c=true;
                        break;
                    }
                }
                if(c)printf("Case %d: Not possible\n",I++);
                else
                {
                    printf("Case %d: Possible from station %d\n",I++,index);
                }
        }
    }
    return 0;
}

