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
#define pc(I) printf("Case #%d: ",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");

vector<ll> primes;
int I=1;
bitset<101> p;
void sieve()
{
    p[0]=1;
    p[1]=1;
    for(int i=2;i*i<=100;i++)
    {
        if(p[i])continue;
        for(int j=2*i;j<=100;j+=i)
        {
            p[j]=1;
        }
    }
    for(int i=2;i<=100;i++)
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
    int t;
    int n;
    sf(t);
    while(t--)
    {
        pc(I);
        int a,b,c,d;
        int A,B,C,D;
        cin >> a >> b >> c >> d >> A >> B >> C >> D;

        if(a==A&&b==B&&c==C&&d==D)
        {
            printf("POSSIBLE\n");
            continue;
        }
        if(a==B&&b==D&&c==A&&d==C)
        {
            printf("POSSIBLE\n");
            continue;
        }
        if(a==D&&b==C&&c==B&&d==A)
        {
            printf("POSSIBLE\n");
            continue;
        }
        if(a==C&&b==A&&c==D&&d==B)
        {
            printf("POSSIBLE\n");
            continue;
        }

        printf("IMPOSSIBLE\n");
    }
}

