/**  I have used BFS to solve this poblem */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node;
    while(cin>>node&&node)
    {
        int edge;
        bool biColour=true;
        cin>>edge;
        vector<int> Graph[node];
        int Colour[node];
        memset(Colour,-1,sizeof(Colour));
        int u,v;
        while(edge--)
        {
            cin>>u>>v;
            Graph[u].push_back(v);
            Graph[v].push_back(u);
        }
        queue<int> bi;
        bi.push(0);Colour[0]=1;
        while(!bi.empty())
        {
            int f=bi.front();
            bi.pop();
            for(vector<int>::iterator it=Graph[f].begin();it!=Graph[f].end();it++)
            {
                if(Colour[*it]==-1)
                {
                    if(Colour[f]==1)Colour[*it]=2;
                    if(Colour[f]==2)Colour[*it]=1;
                    bi.push(*it);
                }
                else if(Colour[f]!=Colour[*it])continue;
                else {
                    biColour=false;
                    break;
                }

            }
        }
        if(!biColour)cout<<"NOT BICOLORABLE.\n";
        else cout<<"BICOLORABLE.\n";
    }
    return 0;
}
