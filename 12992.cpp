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

vector<int> a(101);
void sieve()
{
	int j=1;
	for(int i=1;i<=100;i++)
	{
		a[i]=j;
		j+=2;
	}
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	int t;
	cin>>t;
	int n;
	int I=1;
	while(t--)
	{
		cin>>n;
		printf("Case #%d: %d\n",I++,a[n]);
	}
	return 0;
}
