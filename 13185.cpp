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
	
	//freopen("c.txt","w",stdout);
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int sum=0;
		for(int i=1;i<=n/2;i++)
		{
			if(n%i==0)sum+=i;
		}
		if(sum<n)printf("deficient\n");
		else if(sum>n)printf("abundant\n");
		else printf("perfect\n");
	}
	return 0;
}
