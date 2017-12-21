#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
bool is_prime(int n)
{
	if(n==1)
	return false;
	if(n==2)
	return true;
	if(n%2==0)
	return false;
	for(int i=3;i<=sqrt(n);i+=2)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int t;
	scanf("%d",&t);
	int num;
	while(t--)
	{
		cin>>num;
		bool found=false;
		int limit;
		if(num<10)
		limit=9;
		else if(num<100)
		limit=18;
		else if(num<1000)
		limit=27;
		else if(num<10000)
		limit=45;
		else
		limit=60;
		int total;
		for(int i=num-limit;i<=num;i++)
		{
			//cout<<i<<" ";
			int sum=i;
			total=sum;
			while(sum!=0)
			{
				total+=sum%10;
				sum/=10;
			}
			if(total==num)
			{
				found=true;
				total=i;
				break;
			}
			total=0;
			//cout<<endl;
		}
		if(found)
		printf("%d\n",total);
		else
		printf("0\n");
	}
	ret 0;
}
