#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	cout<<"PERFECTION OUTPUT\n";
	int n;
	while(cin>>n&&n)
	{
		int sum=0;
		for(int i=1;i<=n/2;i++)
		{
			if(n%i==0)
			sum+=i;
		}
		if(sum==n)
		{
			printf("%5d  PERFECT\n",n);
		}
		else if(sum<n)
		{
			printf("%5d  DEFICIENT\n",n);
		}
		else
		{
			printf("%5d  ABUNDANT\n",n);
		}
	}
	printf("END OF OUTPUT\n");
	return 0;
}
