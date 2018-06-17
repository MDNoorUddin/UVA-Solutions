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
    int n;
    while(cin>>n)
    {
    	if(n==0)break;
    	priority_queue<int> a;
    	int x;
    	int positive =0;
    	int sum=0;
    	while(n--)
        {
            cin>>x;
            sum+=x;
            a.push(sum);
            if(sum<=0)sum=0;
        }
        if(a.empty()||a.top()<=0)
        {
            cout<<"Losing streak.\n";
        }
        else
        {
            printf("The maximum winning streak is %d.\n",a.top());
        }
	}
}
