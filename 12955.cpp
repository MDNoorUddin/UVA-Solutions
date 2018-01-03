#include<stdio.h>
#include<iostream>
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
#define PI 3.1415

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		int count=0;
		if(n>=40320)
		{
			//cout<<n<<endl;
			count+=(n/40320);
			n=n%40320;
		}
		if(n>=5040)
		{
			//cout<<n<<endl;
			count+=(n/5040);
			n=n%5040;
		}
			if(n>=720)
		{
			//cout<<n<<endl;
			count+=(n/720);
			n=n%720;
		}
			if(n>=120)
		{
			//cout<<n<<endl;
			count+=(n/120);
			n=n%120;
		}
			if(n>=24)
		{
			//cout<<n<<endl;
			count+=(n/24);
			n=n%24;
		}
		if(n>=6)
		{
			//cout<<n<<endl;
			//cout<<n<<endl;
			count+=(n/6);
			n=n%6;
		}
		if(n>=2)
		{
			//cout<<n<<endl;
			count+=(n/2);
			n=n%2;
		}
		if(n>=1)
		{
			//cout<<n<<endl;
			count+=(n);
		}
		cout<<count<<endl;
	}
	return 0;
}
