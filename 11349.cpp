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


typedef long long ll;
typedef std::vector<ll> vi;

#define PI acos(-1)
#define E 2.718281828459

std::bitset<2250> bs; // 10^7 + small extra bits should be enough for most prime-related problems
std::vector<ll> primes; // compact list of primes in form of vector<int>
void sieve(ll upperbound) { // create list of primes in [0 .. upperbound]
          int sieve_size = upperbound + 1; // add 1 to include upperbound
           bs.reset(); bs.flip(); // set all numbers to 1
            bs.set(0, false); bs.set(1, false); // except index 0 and 1
          for (ll i = 2; i <= sieve_size; i++) if (bs.test((size_t)i)) {
// cross out multiples of i starting from i * i! 
          for (ll j = i * i; j <= sieve_size; j += i) bs.set((size_t)j, false);
           primes.push_back((int)i);
    }
} 
vi primeFactors(ll N) {
      vi factors;          // vi "primes" (generated by sieve) is optional
      ll PF_idx = 0, PF = primes[PF_idx]; // using PF = 2, 3, 4, ..., is also ok.
      while ((PF * PF <= N)) { // stop at sqrt(N), but N can get smaller
        while (N % PF == 0) { 
		N /= PF; factors.push_back(PF); } // remove this PF
            PF = primes[++PF_idx]; // only consider primes!
            }
          if (N != 1) factors.push_back(N); // special case if N is actually a prime
      return factors;
}

int gcd(int a, int b)
{ 
       return (b == 0 ? a : gcd(b, a % b)); 
}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	std::cin>>t;
	int I=1;
	while(t--)
	{
		std::cin.ignore();
		int n;
		scanf("N = %d",&n);
		ll x;
		std::vector<int> ans;
		bool test=false;
		for(int i=0;i<n*n;i++)
		{
			std::cin>>x;
			if(x<0)test=true;
			ans.push_back(x);
		}
		if(test){
			printf("Test #%d: Non-symmetric.\n",I++);
			continue;
		}
		for(int i=0,j=ans.size()-1;i<ans.size();i++,j--)
		{
			//std::cout<<ans[i]<<" "<<ans[j];
			if(ans[i]!=ans[j])
			{
				test=true;break;
			}
		}
		if(test)printf("Test #%d: Non-symmetric.\n",I++);
		else printf("Test #%d: Symmetric.\n",I++);
	}
	return 0;
}
