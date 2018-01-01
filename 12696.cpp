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
	double a,b,c,d;
	int count=0;
	int t;
	cin>>t;
	while(t--)	
	{
		cin>>a>>b>>c>>d;
		if(a<=56.00&&b<=45.00&&c<=25.00&&d<=7.00)
		{
			cout<<1<<endl;count++;
		}
		else if(a+b+c<=125.00&&d<=7.00)
		{
			cout<<1<<endl;count++;
		}
		else
		{				
		    cout<<0<<endl;
		}
	}
	cout<<count<<endl;
	return 0;
}
