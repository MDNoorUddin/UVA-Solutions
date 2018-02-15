#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	int t,a,b,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&k);
		long long sum=0;
		long long count=0;
		for(int i=a;i<=b;i++)
		{
			if(i%k==0)
			{
				for(int j=1;j<=sqrt(i);j++)
				{
					if(i%j==0)
					{
						
						if (i/j == j)
					   {
					   	sum+=j;
						count++;
						} 
                       else 
                        {
                        		sum+=j;
                        		sum+=(i/j);
						        count+=2;
						}
						
					}
				}
			}
		}
		//printf("%d %d\n",count,sum);
		cout<<count<<" "<<sum<<endl;
	}
	return 0;
}
