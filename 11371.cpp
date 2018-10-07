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

vector<ll> a(1000001);

void sieve()
{
    a[0]=1;
    for(int i=1;i<=1000000;i++)
    {
        a[i]=(i%1000003*a[i-1]%1000003)%1000003;
    }
    //cout<<a[4000]<<endl;
}

ll modPow(ll x,ll n,ll m)
{
    if(n==0)return 1%m;
    ll u=modPow(x,n/2,m);
    u=(u*u)%m;
    if(n%2==1)u=(u*x)%m;
    return u;
}

int main()
{
    //freopen("c.txt","w",stdout);
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    string str;
    while(cin>>str)
    {
        string s=str;
        string S=str;
        sort(s.begin(),s.end());

        int index=-1;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0')
            {
                index=i;
                break;
            }
            else count++;
        }

        string temp;
        temp=temp+s[index];
        for(int i=1;i<=count;i++)
        {
            temp=temp+'0';
        }
        for(int i=index+1;i<s.length();i++)
        {
            temp=temp+s[i];
        }
        //cout<<temp<<endl;
        sort(S.begin(),S.end(),greater<int>());
        stringstream f(str);
        ll x;
        f>>x;
        stringstream F(temp);
        ll y;
        F>>y;
        //cout<<y<<endl;
        stringstream FF(S);
        ll z;
        FF>>z;
        //cout<<z<<endl;
        //cout<<"HEllo\n";
        if(x>z)
        printf("%lld - %lld = %lld = 9 * %lld\n",z,y,abs(z-y),abs(z-y)/9);
        else
        printf("%lld - %lld = %lld = 9 * %lld\n",z,y,abs(z-y),abs(z-y)/9);
    }
    return 0;
}
