#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	return (b==0?a:gcd(b,a%b));
}
int main()
{
	int n;
	while(cin>>n&&n)
	{
		vector<double> a(n);
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		double set=n-1;
		set=set*(set+1);
		set/=2;
		double count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(gcd(a[i],a[j])==1)
				count++;
			}
		}
		if(count)
		{
			printf("%.6lf\n",sqrt((set*6)/count));
		}
		else
		{
			printf("No estimate for this data set.\n");
		}
	}
	return 0;
}
