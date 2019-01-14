#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,I=1;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        vector<ll> a(n);
        priority_queue<ll> q;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            q.push(x-a[i]);
        }
        ll sum=0;
        for(int i=1;i<=n-k;i++)
        {
            sum+=q.top();
            q.pop();
        }
        for(int i=n-k+1;i<=n;i++)
        {
            if(q.top()<0)break;
            sum+=q.top();
            q.pop();
        }
        if(sum<=0)
        {
            cout<<"Case "<<I++<<": No Profit\n";
        }
        else
        {
            cout<<"Case "<<I++<<": "<<sum<<'\n';
        }
    }
    return 0;
}
