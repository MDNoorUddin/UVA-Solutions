#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
vector<vector<int> > a(101);
vector<bool> v(101);
vector<int> ans;
void dfs(int n)
{
    if(v[n])return;
    v[n]=true;
    for(auto e:a[n])
    {
        dfs(e);
    }
    ans.push_back(n);
    return;
}

int main()
{
    int n,m;
    int u,vi;
    while(cin>>n>>m&&n)
    {
        for(int i=0;i<a.size();i++)
        {
            a[i].clear();
        }
        fill(v.begin(),v.end(),false);
        int mn=1;
        while(m--)
        {
            cin>>u>>vi;
            mn=u;
            a[u].push_back(vi);
        }
        for(int i=1;i<=n;i++){
        if(!v[i])
            dfs(i);
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            if(i!=0)cout<<" ";
            cout<<ans[i];
        }
        cout<<endl;
        ans.clear();
    }

}
