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
	double a,b;
	int I=1;
	while(cin>>a>>b)
	{
		if(a<b)printf("Case %d: Smaller\n",I++);
		else if(a>b)printf("Case %d: Bigger\n",I++);
		else printf("Case %d: Same\n",I++);
	}
	return 0;
}
