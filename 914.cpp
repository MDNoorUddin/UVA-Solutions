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
#define pc(I) printf("Case %d: ",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");

int CS=1;
bitset<1000001> v;
vector<int> primes;
void sieve()
{
    v[0]=1;
    v[1]=1;
    for(int i=2;i*i<=1000000;i++)
    {
        if(v[i])continue;
        for(int j=i*2;j<=1000000;j+=i)
        {
            v[j]=1;
        }
    }
    for(int i=2;i<=1000000;i++)
    {
        if(!v[i])primes.push_back(i);
    }
    return;
}
int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t;
    cin>>t;
    int l,u;
    while(t--)
    {
        cin>>l>>u;
        if(l==u)
        {
            cout<<"No jumping champion\n";
            continue;
        }
        if(u-l>1000)
        {
            cout<<"The jumping champion is "<<6<<endl;
            continue;
        }
        int index=-1;
        for(int i=l;i<=u;i++)
        {
            //cout<<i<<" "<<v[i]<<endl;
            //cout<<"done\n";
            if(v[i]==0)
            {
                //cout<<"he he\n";
                index=i;
                break;
            }
        }
        //cout<<"----------\n";
        //cout<<"index "<<index<<endl;
        //return 0;
        if(index==-1)
        {
            cout<<"No jumping champion\n";
            continue;
        }
        unordered_map<int,int> mp;
        priority_queue<int> mx;
        unordered_map<int,int>::iterator it;
        int pre_prime=index;
        int count=0;
        for(int i=index+1;i<=u;i++)
        {
            if(!v[i])
            {
                count++;
                mp[i-pre_prime]++;
                mx.push(mp[i-pre_prime]);
                //cout<<"current prime "<<i<<endl;
                //cout<<"previous prime "<<pre_prime<<endl;
                pre_prime=i;
            }
        }
        if(count==0)
        {
            cout<<"No jumping champion\n";
            continue;
        }
        it=mp.begin();
        while(it!=mp.end())
        {
            //cout<<it->first<<" "<<it->second<<endl;
            it++;
        }
        int c=mx.top();
        mx.pop();
        if(!mx.empty()&&c==mx.top())
        {
            cout<<"No jumping champion\n";
        }
        else
        {
            it=mp.begin();
            while(it!=mp.end())
            {
              if(it->second==c)
              {
                  cout<<"The jumping champion is "<<it->first<<endl;
                  break;
              }
              it++;
            }
        }
    }
}
