#include<bits/stdc++.h>
using namespace std;
bool a[3651];
void sieve()
{
	memset(a,true,sizeof(a));
	for(int i=6;i<=3651;i+=7)
	{
		a[i]=false;
	}
	for(int i=7;i<=3651;i+=7)
	{
		a[i]=false;
	}
	return;
}
int main()
{
	int t;
	scanf("%d",&t);
	int day;
	while(t--)
	{
		sieve();
		scanf("%d",&day);
		int num;
		int g;
		int sum=0;
		scanf("%d",&num);
		while(num--)
		{
			scanf("%d",&g);
			for(int i=g;i<=day;i+=g)
			{
				if(a[i])
				{
					sum++;
					a[i]=false;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
