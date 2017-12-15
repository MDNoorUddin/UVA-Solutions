#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
	int n;
	int I=1;
	while(cin>>n&&n)
	{
		vector<int> a(n);
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sum/=n;
		int te=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>sum)
			te+=a[i]-sum;
		}
		printf("Set #%d\n",I++);
		printf("The minimum number of moves is %d.\n\n",te);
	}
}
