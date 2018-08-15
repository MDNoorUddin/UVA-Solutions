#include<iostream>
#include<vector>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<set>
#include<stdio.h>
#include<math.h>

typedef long long ll;

#define PI acos(-1)

#define E 2.718281828459

using namespace std;

int main() {
	double n;
	while(cin>>n)
	{
		if(n==0)break;
		double a=(int)cbrt(n);

		//cout<<a<<" "<<endl;

		double dx = (n-pow(a,3))/(3*pow(a,2));

		printf("%.4lf\n",a+dx);

	}
	return 0;
}
