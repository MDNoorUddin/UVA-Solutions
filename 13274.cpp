#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<iterator>
#include<algorithm>
#include<string>
using namespace std;

typedef long long ll;

#define MAX 999999999999
#define MIN -99999999999
#define MAXSIZE 1024
#define pf(I,a) printf("Case %d: %d\n",I++,a);

vector<vector<int> > graph(MAXSIZE);

int nodes;

int dfs(int s,int e)
{
    vector<int> A;
    for (auto u : graph[s]) {
       if (u != e) A.push_back(dfs(u, s));
    }
    if(A.size()<nodes)return 1;
    sort(A.begin(),A.end(),greater<int>());
    int sum=1;
    for(int i=0;i<nodes;i++)
    {
        sum+=A[i];
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,u,v,I=1;
    cin>>t;
    int n;
    while(t--)
    {
        for(int i=0;i<MAXSIZE;i++)
            graph[i].clear();
        cin>>n>>nodes;
        for(int i=1;i<n;i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);graph[v].push_back(u);
        }
        pf(I,dfs(1,-1));
    }
}
