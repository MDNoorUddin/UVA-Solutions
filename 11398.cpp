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
	string str;
	while(cin>>str)
	{
		if(str=="~")break;
		int f=0;
		int flag;
		string binary;
		while(true)
		{
			if(f!=0)
			{
				cin>>str;
			}
			f++;
			if(str[0]=='#')break;
			else if(str=="0")flag = 1;
			else if (str=="00")flag = 0;
			else
			{
				int temp = str.size()-2;
				if(flag==1)
				{
					for(int i=1;i<=temp;i++)binary = binary + '1';
				}
				else
				{
					for(int i=1;i<=temp;i++)binary = binary + '0';
				}
			}
		}
		reverse(binary.begin(),binary.end());
		//cout<<binary<<endl;
		ll sum=0;
		for(int i=0;i<binary.length();i++)
		{
			if(binary[i]=='1')
			{
				sum+=(pow(2,i));
			//cout<<"pow "<<(pow(2,i))<<" ";
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
