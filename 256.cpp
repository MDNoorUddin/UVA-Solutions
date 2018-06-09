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
	
	int t;
	while(cin>>t)
	{
		ll num;
		if(t==2)num=99;
		if(t==4)num=9999;
		if(t==6)num=999999;
		if(t==8)num=99999999;
		
		int i=0;
		while(i*i < num)
		{
			stringstream s;
			s<<i*i;
			string str;
	        s>>str;
	        while(str.length()!=t)
	        {
	        	str  =  '0' + str;
			}
			//cout<<str<<endl;
			
			string first,last;
			for(int j=0;j<str.length()/2;j++)first=first +str[j];
			
			for(int j=str.length()/2;j<str.length();j++)last=last +str[j];
			
			//cout<<first<<" "<<last<<endl;
			
			stringstream a(first);
			stringstream b(last);
			
			int y,z;
			a>>y;b>>z;
			//cout<<y<<"---------------"<<z<<endl;
			if((y+z)*(y+z) == i*i)
			{
				cout<<str<<endl;
			}
			i++;
		}
	}
}
