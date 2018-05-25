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
	ll sum;
	while(t--)
	{
		cin>>sum;
		sum*=2;
		ll $sqrt = sqrt(sum);
		
		if($sqrt*($sqrt+1)==sum)
		{
			cout<<$sqrt-1<<endl;
		}
		else
		{
			cout<<"No solution\n";
		}
	}
}
