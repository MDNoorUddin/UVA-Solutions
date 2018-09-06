#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> node(n);
        for(int i=0;i<n;i++)
        {
            cin>>node[i];
        }
        vector< priority_queue<pair<int,int> > > graph(n);
        int u,v;
        while(m--)
        {
            cin>>u>>v;
            graph[u].push(make_pair(node[v],v));
        }
        queue<int> traverse;
        traverse.push(0);
        int lastNode;
        int sum=0;
        while(!traverse.empty())
        {
            lastNode = traverse.front();
            //cout<<lastNode<<endl;
            traverse.pop();
            sum+=node[lastNode];
            if(graph[lastNode].empty())
            {
                break;
            }
            traverse.push(graph[lastNode].top().second);
        }
        printf("Case %d: %d %d\n",I++,sum,lastNode);
    }
    return 0;
}
