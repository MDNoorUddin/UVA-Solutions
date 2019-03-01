#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
vector<vector<int> > a(131073);
vector<int> v(131073);
vector<int> ans;
bool x=false;
void dfs(int n)
{
    if(v[n]==1)
    {
        x=true;
        return;
    }
    if(v[n]==2)
    {
        return;
    }
    v[n]=1;
    for(auto e:a[n])
    {
        dfs(e);
    }
    v[n]=2;
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
        fill(v.begin(),v.end(),0);
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
        if(x)
        {
            cout<<"IMPOSSIBLE\n";
        }
        else{
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<'\n';
        }
        //cout<<endl;
        }
        ans.clear();
        x=false;
    }

}
