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
	ll s,d;
	while(cin>>s>>d)
	{
		ll firstSum;
		ll secondSum;
		firstSum=(s-1)*s;
		firstSum/=2;
		d=d+firstSum;
		secondSum=d*2;
		ll ff=sqrt(secondSum);
		ll f=(ff*(ff+1))/2;
		if(f<d)
		{
			ff++;
		}
		cout<<ff<<endl;
	}
	return 0;
}
