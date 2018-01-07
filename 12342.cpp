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
#define PI 3.1415

int main(int argc, char** argv) {
	
	freopen("c.txt","w",stdout);
	int t;
	cin>>t;
	double n;
	int I=1;
	while(t--)
	{
		cin>>n;
		double total=0;
		double x,y;
		if(n>1180000)
		{
			x=n-1180000;
			n-=x;
			//cout<<x<<endl;
			x=ceil(25*x/100.00);
			total+=x;
		}
		if(n>880000)
		{
			//cout<<x<<endl;
			x=n-880000;
			n-=x;
			x=ceil(20*x/100.00);
			total+=x;
		}
		if(n>480000)
		{
			x=n-480000;
		//	cout<<x<<endl;
			n-=x;
			//cout<<n<<endl;
			x=ceil(15*x/100.00);
			//cout<<x<<endl;
			total+=x;
		}
		if(n>180000)
		{
			x=n-180000;
			n-=x;	
			//cout<<n<<endl;
			x=ceil((10*x/100.00));
			//cout<<x<<endl;
			total+=x;
			if(total<2000)total=2000;
		}
		else
		{
			//cout<<x<<endl;
			total+=0;
		}
		ll k=total;
		printf("Case %d: %lld\n",I++,k);
	}
	return 0;
}                   
