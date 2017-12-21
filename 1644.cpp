#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
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
	int num;
	while(cin>>num&&num)
	{
		if(is_prime(num))
		cout<<"0\n";
		else
		{
			int upper=num+1;
			while(true)
			{
				if(is_prime(upper))
				break;
				upper++;
			}
			int lower=num-1;
			while(true)
			{
				if(lower==1)
				break;
				if(is_prime(lower))
				break;
				lower--;
			}
			printf("%d\n",upper-lower);
		}
	}
	ret 0;
}
