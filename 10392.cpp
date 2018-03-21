#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
#include<bitset>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
#define PI acos(-1)
#define e 2.718281828459

bitset<10000010> bs;
vector<ll> primes;
void sieve(ll upperbound) { 
          int sieve_size = upperbound + 1; 
           bs.reset(); bs.flip();
            bs.set(0, false); bs.set(1, false); 
          for (ll i = 2; i <= sieve_size; i++) if (bs.test((size_t)i)) {
          for (ll j = i * i; j <= sieve_size; j += i) bs.set((size_t)j, false);
           primes.push_back((int)i);
    }
} 
vi primeFactors(ll N) {
      vi factors;
      ll PF_idx = 0, PF = primes[PF_idx];
      while (N != 1 && (PF * PF <= N)) {
        while (N % PF == 0) { N /= PF; factors.push_back(PF); } 
            PF = primes[++PF_idx];
            }
          if (N != 1) factors.push_back(N);
      return factors;
}

int gcd(int a, int b)
{ 
       return (b == 0 ? a : gcd(b, a % b)); 
}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve(10000000);
	ll n;
	while(cin>>n&&n>=0)
	{
		vi result=primeFactors(n);
		for(int i=0;i<result.size();i++)
		{
			printf("    %lld\n",result[i]);
		}
		cout<<endl;
	}
	return 0;
}
