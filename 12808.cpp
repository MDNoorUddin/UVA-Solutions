#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
#include<bitset>

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459
#define g 9.81

int main(int argc, char** argv) {
	int t;
	cin>>t;
    double L,D,H,V;
	double l,d,h,v;
	while(t--)
	{
		cin>>L>>D>>H>>V;
		
		l=double(L/1000.00);d=double(D/1000.00);h=double(H/1000.00);
		v=double(V/1000.00);
		double b = sqrt((2*h)/g);
		
		b =b*v;
		if(b <= d+.5)
		{
			double diff = d - b;
			
			if(diff>.5)
			{
				printf("FLOOR\n");
				continue;
			}
			else
			{
				printf("EDGE\n");
				continue;
			}
		}
		
		else
		{
			if(b < d+l-.5)
			{
				printf("POOL\n");
				continue;
			}
			
			if(b<= d + l + .5)
			{
				printf("EDGE\n");
				continue;
			}
			printf("FLOOR\n");
				continue;
		}
	}
}
