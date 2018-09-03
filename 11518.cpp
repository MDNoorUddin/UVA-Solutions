#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>

using namespace std;

typedef long long ll;


int main(int argc, char** argv){
    //freopen("c.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l;
        cin>>n>>m>>l;
        vector< vector<int> > a(n+1);
        int u,v;
        while(m--)
        {
            cin>>u>>v;
            a[u].push_back(v);
        }
        vector<int> visit(n+1);
        fill(visit.begin(),visit.end(),0);
        int count=0;
        while(l--)
        {
            cin>>u;
            queue<int> domino;
            if(visit[u]==0){
              //count++;
              domino.push(u);
              while(!domino.empty())
              {
                  //count++;
                  int fr=domino.front();
                  domino.pop();
                  visit[fr]=1;
                  for(int i=0;i<a[fr].size();i++)
                  {
                      //cout<<"--"<<a[fr][i]<<" ";
                      if(visit[a[fr][i]]==0)
                     domino.push(a[fr][i]);
                  }
                  //cout<<endl;
              }
            }
        }
        for(int i=0;i<visit.size();i++)
        {
            if(visit[i]==1)count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
