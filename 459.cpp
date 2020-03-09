#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
#define mn -
#define mod %
#define E =
#define EE ==
//int mx=9999999;
/**  '' "\n" x ^ **/

void yes()
{
    cout<<"YES\n";
}

void no()
{
    cout<<"NO\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    cin.ignore();
    string tr;
    getline(cin,tr);

    in(i,t)
    {
        //cout<<22<<endl;
        if(i!=0)cout<<endl;
        string s;
        cin>>s;
        //cout<<1123<<endl;
        int n=s[0] mn 65;
        //cout<<s<<endl;
        vector<vector<int> > a(27);
        cin.ignore();
        string str;
        while(getline(cin,str)){
            if(str=="")break;
            int u=str[0] mn 65;
            int v=str[1] mn 65;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        int v[27]={0};

        int count=0;
        //cout<<1111111<<endl;
        //cout<<n<<endl;
        for(int i=0;i<=n;i++)
        {
            if(!v[i])
            {
                //cout<<i<<endl;
                queue<int> q;
                q.push(i);
                v[i]=1;
                count++;
                while(!q.empty())
                {
                    int tp=q.front();
                    v[tp]=1;
                    q.pop();
                    for(auto u:a[tp]){

                            if(v[u])continue;
                           q.push(u);
                    }
                }
            }
        }
        cout<<count<<endl;
        //getline(cin,str);
    }
}
