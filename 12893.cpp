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
ll re(ll n)
{
	if(n==0)return 0;
	return (re(n/2)+(n%2));
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
    int t;
    cin>>t;
    ll n;
    while(t--)
    {
    	cin>>n;
    	printf("%d\n",re(n));
	}
	return 0;
}
