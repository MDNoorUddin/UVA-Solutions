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

bitset<1000001> prime;

void sieve()
{
   for(int i=2;i<=1000001;i++)
   {
       if(prime[i]==1)continue;
       for(int j=i*2;j<=1000001;j+=i)
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
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    register int n;
    while(cin>>n)
    {
        register int N;
        N=n;
        if(n%2!=0)
        {
            if(n==1)
            {
                printf("%d is not the sum of two primes!\n",n);
                continue;
            }
            n-=2;
            if(isPrime(n))
            {
                printf("%d is the sum of 2 and %d.\n",N,n);
            }
            else
            {
                printf("%d is not the sum of two primes!\n",N);
            }
        }
        else
        {
            bool x=false;
            register int p1,p2;
            for(int i=n/2,j=n/2;i<n&&j>=2;i++,j--)
            {
                if(isPrime(i))
                {
                    if(isPrime(j)&&i!=j)
                    {
                        p1=j;
                        p2=i;
                        x=true;
                        break;
                    }
                }
            }
            if(!x)
            {
                printf("%d is not the sum of two primes!\n",n);
            }
            else
            {
                printf("%d is the sum of %d and %d.\n",n,p1,p2);
            }

        }
    }
    return 0;
}
