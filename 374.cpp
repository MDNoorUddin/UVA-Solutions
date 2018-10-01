#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<bits/stdc++.h>

using namespace std;

#define INF 999999999999999999

typedef long long ll;

vector<int> a(1000001);

void sieve()
{
    a[0]=1;
    for(int i=1;i<=1000000;i++)
    {
        a[i]=(i*a[i-1])%1000003;
    }
    for(int i=1;i<=1000;i++)
    {
        cout<<i<<" "<<a[i]<<endl;
    }
    //cout<<a[4000]<<endl;
}

int modPow(int x,int n,int m)
{
    if(n==0)return 1%m;
    ll u=modPow(x,n/2,m);
    u=(u*u)%m;
    if(n%2==1)u=(u*x)%m;
    return u;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<modPow(b,p,m)<<endl;
    }
    return 0;
}

