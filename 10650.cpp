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
bitset<32001> v;
vector<int> primes;
void sieve()
{
    v[0]=1;
    v[1]=1;
    for(int i=2;i*i<=32000;i++)
    {
        if(v[i])continue;
        for(int j=i*2;j<=32000;j+=i)
        {
            v[j]=1;
        }
    }
    for(int i=2;i<=32000;i++)
    {
        if(!v[i])primes.push_back(i);
    }
    return;
}

vector<vector<int> > x;

void c()
{
    int l=0,u=32000;
    int index=-1;
        for(int i=l;i<=u;i++)
        {
            if(!v[i])
            {
                index=i;
                break;
            }
        }
        //cout<<"hello\n";
        //cout<<index<<endl;
        vector<int> test;
        int pre_prime;
        for(int i=0;i<primes.size();i++)
        {
            if(primes[i]==index)
            {
                index=i;
                pre_prime=primes[i];
                break;
            }
        }
        //cout<<pre_prime<<endl;
        int i=index+1;
        test.push_back(pre_prime);
        while(primes[i]<=u)
        {
            if(test.size()==1)
            {
                test.push_back(primes[i]);
            }
            else
            {
                if(test[test.size()-1]-test[test.size()-2]==primes[i]-test[test.size()-1])
                {
                    test.push_back(primes[i]);
                }
                else
                {
                    if(test.size()<3)
                    {
                        int x=test[test.size()-1];
                        test.clear();
                        test.push_back(x);
                        test.push_back(primes[i]);
                    }
                    else
                    {
                        x.push_back(test);
                        int x=test[test.size()-1];
                        test.clear();test.push_back(x);
                        test.push_back(primes[i]);
                    }
                }
            }
            i++;
        }
        //cout<<"last\n";
        if(test.size()>2&&test[0]!=0)
        {
            if(test[test.size()-1]-test[test.size()-2]==primes[i]-test[test.size()-1]){
                test.push_back(primes[i]);
            }
            x.push_back(test);
        }
}
int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    c();
    /*for(int i=0;i<x.size();i++)
    {
        for(int j=0;j<x[i].size();j++)
        {
            if(x[i][j]==0)break;
            if(j==0)cout<<x[i][j];
            else cout<<" "<<x[i][j];
        }
        cout<<endl;
    }*/
    int l,u;
    while(cin>>l>>u)
    {
        if(u==0&&l==0)break;
        if(l>u)swap(l,u);
        //cout<<l<<" "<<u<<endl;
        for(int i=0;i<x.size();i++)
        {
            bool out=false;
            if(x[i][0]==0)break;
            int h=x[i].size()-1;
            //cout<<x[i][0]<<" "<<x[i][h]<<endl;
            if(x[i][0]>=l&&x[i][h]<=u)
            {
                out=true;
            }
           if(out)
           {
              for(int j=0;j<x[i].size();j++)
              {
                  if(j==0)cout<<x[i][j];
                  else cout<<" "<<x[i][j];
              }
              cout<<endl;
          }
        }
    }
}
