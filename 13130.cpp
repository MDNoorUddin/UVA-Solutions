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
    int t,I=1;
    cin>>t;
    while(t--)
    {
    	vector<int> a(5);
    	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    	
    	if(a[1]==a[0]+1&&a[2]==a[1]+1&&a[3]==a[2]+1&&a[4]==a[3]+1)cout<<"Y\n";
    	else cout<<"N\n";
	}
}
