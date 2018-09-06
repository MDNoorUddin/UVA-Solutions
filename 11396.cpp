#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("last.txt","w",stdout);
    int node;
    while(cin>>node&&node)
    {
        bool biColour=true;
        vector<int> Graph[node+1];
        int Colour[node+1];
        memset(Colour,-1,sizeof(Colour));
        int u,v;
        while(true)
        {
            cin>>u>>v;
            if(u==0&&v==0)break;
            Graph[u].push_back(v);
            Graph[v].push_back(u);
        }
        queue<int> bi;
        bi.push(1);Colour[1]=1;
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
        if(!biColour)cout<<"NO\n";
        else cout<<"YES\n";
    }
return 0;
}
