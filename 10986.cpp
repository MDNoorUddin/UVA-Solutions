#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<bits/stdc++.h>

using namespace std;

#define INF 999999999999999999

typedef long long ll;

int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        int n,m,s,t;
        cin>>n>>m>>s>>t;
        vector<vector<pair<ll,ll> > > a(n);
        int u,v,w;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            a[u].push_back(make_pair(v,w));
            a[v].push_back(make_pair(u,w));
        }
        vector<ll> distance(n);
        fill(distance.begin(),distance.end(),INF);
        distance[s]=0;
        priority_queue< pair<ll,ll> > q;
        q.push({0,s});
        vector<bool> processed(n);
        fill(processed.begin(),processed.end(),false);
        while(!q.empty())
        {
            ll A = q.top().second;
            q.pop();
            if(processed[A])continue;
            processed[A]=true;
            for(auto e:a[A])
            {
                v = e.first;
                w = e.second;
                //cout<<distance[v]<<" "<<distance[A]+w<<endl;
                if(distance[v]>distance[A]+w)
                {
                    distance[v] = distance[A]+w;
                    q.push({-distance[v],v});
                }

            }
        }
        cout<<"Case #"<<I++<<": ";
        //printf("Case #%d: ",I++);
        if(distance[t]!=INF)
        cout<<distance[t]<<endl;
        else cout<<"unreachable\n";
    }
    return 0;
}

