#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<set>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

int I=1;
typedef long long ll;

void negabinary(int n)
{
    if(n==0)
    {
        cout<<0<<endl;
        return;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    vector<int> a;
    while(n)
    {
        if(n==1)
        {
            a.push_back(1);
            break;
        }
        if(n>0)
        {
            int x=n/(2);
            a.push_back(n%2);
            x=(-1)*x;
            n=x;
        }
        else
        {
            int N=abs(n);
            int x=(N/2);
            if(N%2!=0){
                    a.push_back(1);
                x++;
            }
            else
            {
                a.push_back(0);
            }
            n=x;
        }
    }
    for(int i=a.size()-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
    return;
}


long long H(ll n){
    long long res = 0;
    int pre=sqrt(n);
    for( ll i = sqrt(n); i>0; i-- ){
    	if(i==sqrt(n))
    	{
    		int z=n/i;
    		res+=z;
    		res+=((z-pre)*pre);
    		pre=z;
    		continue;
    	}
       ll j=n/i;
       res = (res + j);
       res+=(j-pre)*i;
       pre=j;
    //cout<<i<<" "<<n/i<<endl;
    }
    return res;
}
int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    ll n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        cout<<H(n)<<endl;
    }
    return 0;
}
