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


#define PI acos(-1)
#define E 2.718281828459
#define g 9.81

int main(int argc, char** argv) {
	int n,budget,hotel,week;
	while(cin>>n>>budget>>hotel>>week)
	{
		vector<ll> hotel_found;
		
		for(int i=1;i<=hotel;i++)
		{
			bool f=true;
			int b;
			cin>>b;
			int w;
			for(int j=1;j<=week;j++)
			{
				cin>>w;
				if(w>=n&&f)
				{
				ll sum=b*n;
				if(sum<=budget)
				{
					hotel_found.push_back(sum);
					f=false;
				}
				}
			}
		}
		if(!hotel_found.empty()){
			sort(hotel_found.begin(),hotel_found.end());
			/*for(int ii=0;ii<hotel_found.size();ii++)
			{
				cout<<hotel_found[ii]<<endl;
			}*/
			cout<<hotel_found[0]<<endl;
		}
		else
		{
			printf("stay home\n");
		}
	}
	return 0;
}
