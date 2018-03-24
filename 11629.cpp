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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n,g;
	std::cin>>n>>g;
	map<string,int> mp;
	string str;
	float f;
	getline(cin,str);
	while(n--)
	{
		std::cin>>str>>f;
		int a=(f * 10);
		mp[str]=a;
		getline(cin,str);
	}
	for(int i=1;i<=g;i++)
	{
		getline(cin,str);
		stringstream x(str);
		bool eu=false;
		ll prev=0;
		string temp;
		string comp;
		ll j;
		while(x>>temp)
		{
			//cout<<temp<<endl;
			if(eu)
			{
				stringstream in(temp);
				in>>j;
				continue;
				//printf("%.2f\n",j);
			}
			if(temp=="+")
			{
				continue;
			}
			if(temp[0]=='<'||temp[0]=='>'||temp[0]=='=')
			{
				comp=temp;
				eu=true;
				continue;
			}
			//cout<<temp<<" "<<mp[temp]<<endl;
			prev+=mp[temp];
		}
		//printf("pre %.8f\n",prev);
		//prev = floor(prev * 10);
		j*=10;
		//printf("pre %.8f\n",prev);
		if(comp=="=")
		{
			if(prev!=j)
			{
				printf("Guess #%d was incorrect.\n",i);
			}
			else
			{
				printf("Guess #%d was correct.\n",i);
			}
		}
		if(comp=="<=")
		{
			if(prev>j)
			{
				printf("Guess #%d was incorrect.\n",i);
			}
			else
			{
				printf("Guess #%d was correct.\n",i);
			}
		}
		if(comp==">=")
		{
			if(prev<j)
			{
				printf("Guess #%d was incorrect.\n",i);
			}
			else
			{
				printf("Guess #%d was correct.\n",i);
			}
		}
		if(comp==">")
		{
			if(prev<=j)
			{
				printf("Guess #%d was incorrect.\n",i);
			}
			else
			{
				printf("Guess #%d was correct.\n",i);
			}
		}
		if(comp=="<")
		{
			if(prev>=j)
			{
				printf("Guess #%d was incorrect.\n",i);
			}
			else
			{
				printf("Guess #%d was correct.\n",i);
			}
		}
	}
	return 0;
}
