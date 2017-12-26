#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>


using namespace std;


#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI 3.1415

bool isPrime(int x);

vector<bool> a(32);

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	while(cin>>n&&n)
	{
		if(isPrime(n))
		{
			if(isPrime(pow(2,n)-1))
			{
				ll ans=pow(2,n-1);
				//ans=ans*(pow(n,2)-1);
				ll k=pow(2,n);
				k--;
				//cout<<ans<<" "<<k<<endl;
				ans*=k;
				printf("Perfect: %lld!\n",ans);
			}
			else
			cout<<"Given number is prime. But, NO perfect number is available.\n";
		}
		else
		{
			cout<<"Given number is NOT prime! NO perfect number is available.\n";
		}
	}
	ret 0;
}
bool isPrime(int x)
{
	if(x==1)return false;
	if(x==2)return true;
	if(x%2==0)return false;
	for(int i=3;i<=sqrt(x);i+=2)
	{
		if(x%i==0)return false;
	}
	return true;
}
