#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a,b,c;
	while(t--)
	{
		cin>>a>>b>>c;
		int sum=a+b;
		int rem=0;
		int drink=0;
		while(sum>=c)
		{
			rem=sum%c;
			drink+=sum/c;
			sum=(sum/c)+rem;
			
		}
		cout<<drink<<endl;
	}
	return 0;
}
