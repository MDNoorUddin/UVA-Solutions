#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<iterator>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MAX 999999999999
#define MIN -99999999999
#define pf(a) printf("Case %d: ",a++)
#define MAXSIZE 1024

bitset<1000001> v;
vector<int> primes;

void sieve(){

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
    for(int i=0;i<=1000000;i++)
    {
        if(!v[i])primes.push_back(i);
    }
    return;
}
int digitSum(int num)
{
    int sum=0;

    while(num!=0)
    {
        sum=sum+num%10;
        num/=10;
    }

    //cout<<sum<<endl;

    return sum;
}
int fact_sum(int num)
{
    int i=0,j,sum=0,n=num,range=sqrt(num);

    while(num!=1  && i<=9000)
    {
        if(num%primes[i]==0 && primes[i]<=range)
        {
            sum=sum+digitSum(primes[i]);
            num=num/primes[i];

            //cout<<prime[i]<<" ";

        }
        else
        i++;

    }
    //cout<<endl;

    //cout<<sum<<"** "<<dig_sum(num)<<endl;

    if(n==num)
    sum=0;
    else if(num>1)
    sum+=digitSum(num);

    //cout<<sum<<" "<<num<<endl;
    //cout<<sum<<endl;


    return sum;
}
int prime_factorization(int n)
{
    int i=0;
    int m=n;
    vector<int> test;
    int sum=0;
    while(i<primes.size()&&primes[i]<=n)
    {
        if(n%primes[i]==0){
          int x=digitSum(primes[i]);
          while(n%primes[i]==0)
          {
              sum+=x;
              test.push_back(primes[i]);
              n/=primes[i];
          }
        }
        i++;
    }
    if(n>1)
    {
        test.push_back(n);
    }
    sort(test.begin(),test.end());
    for(int i=0;i<test.size();i++)
    {
        if(i==0)
        {
            cout<<test[i];
        }
        else
        {
            cout<<" x "<<test[i];
        }
    }
    cout<<endl;
}

bool isPrime(int n)
{
    if(n%2==0)return false;
    if(n==1)return false;
    if(n==2)return true;
    if(n==3)return true;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x,y;
    while(cin>>n)
    {
        if(n==0)break;
        map< pair <int,int>, int > mp;
        map< pair <int,int>, int >::iterator it;
        while(n--)
        {
            cin>>x>>y;
            if(mp[make_pair(y,x)]!=0)
            {
                mp[make_pair(y,x)]--;
                continue;
            }
            else
            mp[{x,y}]++;
        }
        it=mp.begin();
        bool x=true;
        while(it!=mp.end())
        {
            if(it->second!=0)
            {
                cout<<"NO\n";
                x=false;
                break;
            }
            it++;
        }
        if(x)
            cout<<"YES\n";
    }
    return 0;
}
