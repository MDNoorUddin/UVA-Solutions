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
string str,ftr;
int a[200001];
int sz[200001];

void sieve()
{
    in(i,200000)
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

int unite(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x==y)return sz[x];
    if(sz[x]<sz[y])
    {
        swap(x,y);
    }
    sz[x]+=sz[y];
    a[y]=x;
    return sz[x];
}
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  sf(t);
  in(I,t){
      sieve();
      int n;
      sf(n);
      map<string,int> mp;
      map<string,int>::iterator it;
      int c=1;
      in(i,n)
      {
          sf(str);sf(ftr);
          it=mp.find(str);
          if(it==mp.end()){
                mp[str]=c;
                u=c++;
          }
          else u=mp[str];
          it=mp.find(ftr);
          if(it==mp.end()){
                mp[ftr]=c;
                v=c++;
          }
          else v=mp[ftr];
          //pf(u);pf(v);
          cout<<unite(u,v)<<endl;
      }
  }
  return 0;
}
