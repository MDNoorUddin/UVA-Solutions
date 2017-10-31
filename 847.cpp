#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	while(cin>>n)
	{
		long long ans=1;
		while(true)
		{
			ans*=9;
			if(n<=ans)
			{
				printf("Stan wins.\n");
				break;
			}
			ans*=2;
			if(n<=ans)
			{
				printf("Ollie wins.\n");
				break;
			}
		}
    }
    return 0;
}
