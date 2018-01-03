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
	int t;
	cin>>t;
	ll a,b;
	while(t--)
	{
		ll sum1=0,sum2=0;
		cin>>a>>b;
		a=abs(a-b);
		sum1=(a*(a-1))/2;
		sum2=(b*(b-1))/2;
		cout<<sum2-sum1<<endl;
	}
	return 0;
}
