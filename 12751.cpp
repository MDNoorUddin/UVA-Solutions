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
	int I=1;
	int n,k,x;
	while(t--)
	{
		cin>>n>>k>>x;
		ll total=(n*(n+1))/2;
		ll p,e;
		p=x+(k-1);
		e=(p*(p+1))/2;
		p=x--;
		ll j=(p*(p-1))/2;
		e=e-j;
		printf("Case %d: %d\n",I++,total-e); 
	}
	return 0;
}
