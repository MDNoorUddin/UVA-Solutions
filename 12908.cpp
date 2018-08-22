#include<iostream>
#include<vector>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<set>
#include<stdio.h>
#include<math.h>

typedef long long ll;

#define PI acos(-1)

#define E 2.718281828459

using namespace std;


int main() {
	ll n;
	while(cin>>n)
	{
		if(n==0)
			break;
		ll x=sqrt(n*2);
		ll y=(x*(x+1))/2;
		if(y<=n)
		{
			x++;
			ll z=(x*(x+1))/2;
			cout<<z-n<<" "<<x<<endl;
		}
		else
		{
			cout<<y-n<<" "<<x<<endl;
		}
	}
	return 0;
}
