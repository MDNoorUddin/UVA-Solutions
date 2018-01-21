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
#include<string.h>

using namespace std;

#define ll long long
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define E 2.718281828459
#define ii pair<int, int>

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	ll n;
	double ans;
	double c;
	while(cin>>n&&n!=0)
	{
		ans=((4*n*n*n)/3)-(n/3)+(n*n*n)-(2*n*n*n);
		ans=ans/(n-1);
		ans=sqrt(ans);
		printf("%.6lf\n",ans);
	}
	return 0;
}         
