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
    for(int i=2;i*i<=100000;i++)
    {
        if(v[i])continue;
        for(int j=i*2;j<=100000;j+=i)
        {
            v[j]=1;
        }
    }
    for(int i=0;i<=100000;i++)
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


int prime_factorization(int n)
{
    int i=0;
    int m=n;
    vector<int> test;
    int sum=0;
    while(primes[i]*primes[i]<=n)
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
        sum+=digitSum(n);
    }
    if(n==m)return 0;
    return sum;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i=n+1;
        int c=0;
        while(true)
        {
            //cout<<i<<" " << digitSum(i)<<" "<<prime_factorization(i)<<endl;
            
            if(digitSum(i)==prime_factorization(i))
            {
                c++;
                cout<<i<<endl;
                break;
            }
            i++;
        }
        //cout<<"total "<<c<<endl;
    }
    return 0;
}
