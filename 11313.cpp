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
	int n,m;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int count=0;int d ;
		while(n>=m)
		{
			int temp = n%m;
			d= n/m;
			count+=d;
			n=d+temp;
		}
		//cout<<n<<" ";
		if(n>1)
		{
			printf("cannot do this\n");
		}
		else
		{
			printf("%d\n",count);
		}
	}
	return 0;
}
