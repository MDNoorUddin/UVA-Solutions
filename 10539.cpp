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

int main()
{

    sieve();
    vector<long long> almostprime;
    for(ll i=0;i<primes.size();i++)
    {
        for( ll j = primes[i]*primes[i] ; j <= 1000000000000 ; j*=primes[i] ) almostprime.push_back(j);
    }
    ll lo , hi ;
    int test ;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lld %lld",&lo,&hi);
        int count = 0 ;
        for(int i = 0 ; i < almostprime.size() ; i++ ) if(almostprime[i]>=lo && almostprime[i]<=hi)count++;
        printf("%d\n",count);
}
}

