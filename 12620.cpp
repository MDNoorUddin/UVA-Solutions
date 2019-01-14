#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> prefix_sum(301);

void sieve()
{
    int p1=1,p2=1,temp;
    long long sum=2;
    fill(prefix_sum.begin(),prefix_sum.end(),0);
    prefix_sum[1]=1;
    prefix_sum[2]=2;
    //cout<<1<<" "<<1;
    for(int i=3;i<=300;i++)
    {
        temp=p1;
        p1+=p2;
        if(p1>99)
        {
            p1%=100;
        }
        sum+=p1;
        prefix_sum[i]=sum;
        //cout<<sum<<" ";;
        //cout<<" "<<p1;
        p2=temp;
    }
    //cout<<endl<<sum<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    //freopen("c.txt","w",stdout);
    int n;
    cin>>n;
    ll a,b;
    while(n--)
    {
        cin>>a>>b;
        a--;
        ll sum=0,sum1=0;
        if(b>300)
        {
            sum=(b/300)*14800;
            b=b%300;
        }
        sum+=prefix_sum[b];
        if(a>300)
        {
            sum1=(a/300)*14800;
            a=a%300;
        }
        sum1+=prefix_sum[a];
        cout<<sum-sum1<<endl;
        //cout<<sum<<endl;
    }
    return 0;
}
