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
	while(t--)
	{
		ll x;
		cin>>x;
		ll n=(x/2)+(x%2);
		
		n=(n*n)*2;
		n-=x;
		cout<<n<<endl;
	}
}
