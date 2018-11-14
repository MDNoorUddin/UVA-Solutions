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
#define pc(I) printf("Case %d:\n",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)

vector<ll> primes;
bitset<1000100> p;
void sieve()
{
    p[0]=1;
    p[1]=1;
    for(int i=2;i*i<=1000010;i++)
    {
        if(p[i])continue;
        for(int j=2*i;j<=1000010;j+=i)
        {
            p[j]=1;
        }
    }
    for(int i=2;i<=1000010;i++)
    {
        if(!p[i])
        {
            primes.push_back(i);
        }
    }
    return;
}

void factorization(ll n)
{
    ll N=n;
    int i=0;
    long long sumOfDivisors=1;
    while(primes[i]<=n&&i<primes.size()){
            int count=0;
            while(n%primes[i]==0){
                count++;
                n/=primes[i];
            }
            if(count!=0)
            {
                sumOfDivisors*=((pow(primes[i],count+1)-1))/(primes[i]-1);
            }
            i++;
    }
    if(n!=1)
    {
        sumOfDivisors*=((pow(n,2)-1))/(n-1);
    }
    sumOfDivisors = sumOfDivisors -N ;
    if(sumOfDivisors==N){
        printf("perfect\n");
    }
    else if(sumOfDivisors>N)
    {
        printf("abundant\n");
    }
    else
    {
        printf("deficient\n");
    }
}
int main()
{

    sieve();
    int t;
    scanf("%d",&t);
    ll n;
    while(t--)
    {
        scanf("%lld",&n);
        factorization(n);
    }
}

