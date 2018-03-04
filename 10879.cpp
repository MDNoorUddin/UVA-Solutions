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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	ll n;
	cin>>t;
	int I=1;
	while(t--)
	{
		cin>>n;
		int count=0;
		vector<ll> a;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(count==2)break;
			if(n%i==0)
			{
				a.push_back(i);
				count++;
			}
		}
		printf("Case #%d: %lld = %lld * %lld = %lld * %lld\n",I++,n,a[0],n/a[0],a[1],n/a[1]);
	}
	return 0;
}
