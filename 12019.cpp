#include<bits/stdc++.h>
using namespace std;
string day[366];
string d[]={"Saturday","Sunday","Monday","Tuesday","Wednesday",
            "Thursday","Friday"};
int a[]={-1,0,31,59,90,120,151,181,212,243,273,304,334};
void sieve()
{
	int i=0;
	day[0]="-1";
	for(int j=1;j<=365;j++)
	{
		day[j]=d[i++];
		if(i==7)
		  i=0;
	}
	return;
}
int main()
{
	freopen("c.txt","w",stdout);
	sieve();
	int t;
	while(cin>>t)
	{
		int M,D;
		while(t--)
		{
			cin>>M>>D;
			int sum=a[M]+D;
			cout<<day[sum]<<endl;
		}
	}
}
