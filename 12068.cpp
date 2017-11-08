#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
 return (b == 0 ? a : gcd(b, a % b));
}
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); }
int main()
{
	//freopen("uva.txt","w",stdout);
	int casE=1;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		vector<ll> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(n!=1){
		ll GCD,LCM=1;
		int i;
		LCM=lcm(a[0],a[1]);
		for(i=2;i<n;i++)
		{
			LCM=lcm(a[i],LCM);
		}
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=(LCM/a[i]);
		}
		LCM=n*LCM;
		while(true)
		{
			ll gcD=gcd(LCM,sum);
			if(gcD==1)break;
			LCM/=gcD;
			sum/=gcD;
		}
		printf("Case %d: %lld/%lld\n",casE++,LCM,sum);
	}
	else
	{
		printf("Case %d: %lld/%lld\n",casE++,a[0],1);
	}
	}
	return 0;
}
