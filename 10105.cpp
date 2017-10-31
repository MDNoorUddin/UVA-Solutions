#include<bits/stdc++.h>
using namespace std;
long long a[13];
void fact()
{
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=12;i++)
	{
		a[i]=i*a[i-1];
	}
	return;
}
int main()
{
	fact();
	int n,k;
	while(cin>>n>>k)
	{
		int x;
		long long fact=1;
		for(int i=0;i<k;i++)
		{
			cin>>x;
			fact*=a[x];
		}
		fact=a[n]/fact;
		cout<<fact<<endl;
	}
	return 0;
}
