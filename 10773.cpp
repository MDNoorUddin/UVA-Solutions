#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int i=1;
	double d,v,u;
	while(t--)
	{
		cin>>d>>v>>u;
		if(u==0||u<v||v==0||u==v)
		{
			printf("Case %d: can't determine\n",i++);
			continue;
		}
		double fast=d/u;
		double shortt=d/sqrt((u*u)-(v*v));
		printf("Case %d: %.3lf\n",i++,shortt-fast);
	}
}
