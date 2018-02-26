#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int ans=0;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[j]<=a[i])ans++;
			}
		}
		printf("%d\n",ans);
	}
}
