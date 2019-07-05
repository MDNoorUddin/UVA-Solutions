#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<ll>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>

graph g(10010);
/**  '' "\n" ^ **/

int n,m,u,v;
string str;
int a[30001];
int sz[30001];

void sieve()
{
    in(i,30000)
    {
        a[i]=i;
        sz[i]=1;
    }
}

int find(int x)
{
    if(x==a[x])return x;
    a[x]=find(a[x]);
    return a[x];
}

void unite(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x==y)return;
    if(sz[x]<sz[y])
    {
        swap(x,y);
    }
    sz[x]+=sz[y];
    a[y]=x;
    return;
}
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  sf(t);
  in(I,t){
      sieve();
      sf(n);sf(m);
      in(i,m)
      {
          sf(u);sf(v);
          unite(u,v);
      }
      int mx=0;
      in(i,n+1)
      {
          if(i==find(i))
          {
              mx=max(sz[i],mx);
          }
      }
      pf(mx);
  }
  return 0;
}
