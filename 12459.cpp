#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[81];
void sieve()
{
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=80;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return;
}
int main()
{
	sieve();
	int bees;
	while(cin>>bees&&bees)
	{
		cout<<a[bees]<<endl;
	}
	return 0;
}
