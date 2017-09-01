#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int main()
{
    int n,e;
    while(cin>>n>>e&&n&&e)
    {
        int belongs[n];
        for(int i=0;i<n;i++)
            belongs[i]=i;
        priority_queue< pair<int, ii> > EdgeList;
        int u,v,w;
        long long cost=0;
        for(int i=0;i<e;i++)
        {
            cin>>u>>v>>w;
            EdgeList.push(make_pair(-w,make_pair(u,v)));
            cost+=w;
        }
        long long mst_cost=0;
         while (!EdgeList.empty())
         {

            pair<int, ii> front = EdgeList.top();
            EdgeList.pop();
          int x=front.second.first;
          int y=front.second.second;
          x=belongs[x];
          y=belongs[y];
          if(x!=y){
           mst_cost += (-front.first);
           for(int i=0;i<n;i++){
            if(belongs[i]==y)
            belongs[i]=x;
            }
          }
         }
         cout<<cost-mst_cost<<endl;
    }
    return 0;
}
