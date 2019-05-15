
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF 99999999
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    int I=0;
    while(t--)
    {
        if(I++)cout<<'\n';
        int n,q;
        int u,v;
        cin>>n>>q;
        vector<vector<int> > g(n);
        while(q--)
        {
            cin>>u>>v;
            g[v].push_back(u);
            g[u].push_back(v);
        }
        bitset<1500> vi;
        vector<int> dis(n);
        fill(dis.begin(),dis.end(),999999);
        dis[0]=0;
        vi[0]=1;
        queue<int> s;
        s.push(0);
        while(!s.empty())
        {
            int tp=s.front();
            s.pop();
            for(int i=0;i<g[tp].size();i++)
            {
                dis[g[tp][i]]=min(dis[g[tp][i]],dis[tp]+1);
                if(vi[g[tp][i]])continue;
                s.push(g[tp][i]);
                vi[g[tp][i]]=true;
            }
        }
        for(int i=1;i<n;i++)
        {
            cout<<dis[i]<<'\n';
        }
    }
}
