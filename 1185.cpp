#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int num;
	while(t--)
	{
		cin>>num;
		double x=0;
		for(int i=1;i<=num;i++)
		{
			x=x+log10(i);
		}
		cout<<(int)x+1<<endl;
	}
	return 0;
}
