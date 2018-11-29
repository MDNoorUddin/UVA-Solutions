
#include<bits/stdc++.h>
#include<bitset>
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
#include<queue>
#include<stack>
#include<deque>
#include<stdio.h>
#include<bitset>

using namespace std;

#define ll long long
#define INF 9999999
#define pfc(I,a) printf("Case %d: %d\n",I++,a)
#define pc(I) printf("Case %d:",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");

int CS=1;
vector<vector<int> > fib(21);
vector<int> f(21);

void sieve()
{
    int n;
    n=3;
    f[1]=3;
    for(int i=2;i<=20;i++)
    {
        n*=2;
        f[i]=n;
    }
    /*for(int i=0;i<=20;i++)
    {
        cout<<f[i]<<" ";
    }*/
    //cout<<endl;
    for(int power=0;power<20;power++){

      fib[power].push_back(0);
      fib[power].push_back(1);
      for(int i=2;i<f[power];i++)
      {
          int k=pow(2,power);
          fib[power].push_back((fib[power][i-1]+fib[power][i-2])%k);
          //cout<<"in\n";
      }
      //cout<<fib[power].size()<<" "<<f[power]<<endl;
    }
   /* for(int power=1;power<=5;power++)
    {
        for(int i=0;i<fib[power].size();i++)
        {
            cout<<fib[power][i]<<" ";
        }
        cout << endl;
    }*/
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //cout<<"done\n";
    sieve();
    //cout<<"done\n";
    int n,m;
    while(cin>>n>>m)
    {
        if(m==0)
        {
            cout<<0<<endl;
            continue;
        }
        int y=pow(2,m);
        cout<<fib[m][n%f[m]]<<endl;
    }
}
