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
    ll n;
    ll p;
    while(t--)
    {
    	cin>>n;
    	if(n<10)p=1;
    	else if(n<100)p=2;
    	else if(n<1000)p=3;
    	else if(n<10000)p=4;
    	else if(n<100000)p=5;
    	else if(n<1000000)p=6;
    	else if(n<10000000)p=7;
    	else if(n<100000000)p=8;
    	else if(n<1000000000)p=9;
    	else p=10;
    	ll copy=n;
    	ll sum=0;
    	while(copy>0)
    	{
    		sum+=pow(copy%10,p);
    		copy/=10;
		}
		if(sum==n)cout<<"Armstrong\n";
		else cout<<"Not Armstrong\n";
	}
	return 0;
}
