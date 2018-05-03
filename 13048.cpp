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
    string str;
    while(t--)
    {
    	cin>>str;
    	int n= str.length();
    	str = "-" + str;
    	str = str + "--";
    	int count=0;
    	for(int i=1;i <= n; i++)
    	{
    		if(str[i]=='-'){
			if(str[i]=='-'&&str[i+2]=='B')
			{
				continue;
			}
			if(str[i]=='-'&&str[i+1]=='B')
			{
				continue;
			}
			if(str[i]=='-'&&str[i-1]=='S')
    		{
    			continue;
			}
			if(str[i]=='-'&&str[i+1]=='S')
    		{
    			continue;
			}
			count++;
			//cout<<"add "<<i<<endl;
		}
		}
		printf("Case %d: %d\n",I++,count);
	}
}
