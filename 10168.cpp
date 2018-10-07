#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<bitset>
#include<string>
#include<bits/stdc++.h>

using namespace std;

#define INF 999999999999999999

typedef long long ll;

bitset<10000001> prime;

void sieve()
{
    prime[1]=1;
   for(int i=2;i<=10000001;i++)
   {
       if(prime[i]==1)continue;
       for(int j=i*2;j<=10000001;j+=i)
       {
           prime[j]=1;
       }
   }
   return;
}

ll modPow(ll x,ll n,ll m)
{
    if(n==0)return 1%m;
    ll u=modPow(x,n/2,m);
    u=(u*u)%m;
    if(n%2==1)u=(u*x)%m;
    return u;
}

bool isPrime(int n)
{
    if(n==1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    register int n;
    while(cin>>n)
    {
        if(n<8)
        {
            cout<<"Impossible.\n";
            continue;
        }
        if(n%2==0)
        {
            n-=4;
            bool x=false;
            register int p1,p2;
            for(int i=n/2,j=n/2;i<n,j>=2;i++,j--)
            {
                if(prime[i]==0&&prime[j]==0)
                {
                    p1=j;
                    p2=i;
                    x=true;
                    break;
                }
            }
            if(!x)
            {
             cout<<"Impossible.\n";
            }
            else
            {
                cout<<2<<" "<<2<<" "<<p1<<" "<<p2<<endl;
            }
        }
        else
        {
            n-=5;
            bool x=false;
            register int p1,p2;
            for(int i=n/2,j=n/2;i<n,j>=2;i++,j--)
            {
                if(prime[i]==0&&prime[j]==0)
                {
                    p1=j;
                    p2=i;
                    x=true;
                    break;
                }
            }
            if(!x)
            {
             cout<<"Impossible.\n";
            }
            else
            {
                cout<<2<<" "<<3<<" "<<p1<<" "<<p2<<endl;
            }
        }
    }
    return 0;
}
