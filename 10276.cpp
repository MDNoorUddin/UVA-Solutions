#include<bits/stdc++.h>
using namespace std;
int a[51];
void sieve()
{
	a[0]=-1;
	int l=2;
	for(int i=1;i<=50;i++)
	{
		a[i]=a[i-1]+l;
		if(i%2==0)l+=2;
	}
}
int main()
{
	sieve();
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<a[n]<<endl;
	}
}
