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
typedef std::vector<ll> vi;

#define PI acos(-1)
#define E 2.718281828459
map<char,int> symbol;
map<char,int> P;
void Sieve()
{
	symbol['B']=1;symbol['U']=10;
	symbol['S']=100;symbol['P']=1000;
	symbol['F']=10000;symbol['T']=100000;
	symbol['M']=1000000;
	return;
}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	Sieve();
	int t;
	cin>>t;
	while(t--)
	{
		map<char,int> mp;
		map<char,int>::iterator it;
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			mp[str[i]]++;
		}
		it=mp.begin();
		bool f=true;
		while(it!=mp.end())
		{
			if(it->second > 9)
			{
				f=false;
				break;
			}
			it++;
		}
		if(!f)
		{
			//cout<<"9 ";
			cout<<"error\n";
			continue;
		}
		if(str.length()>1)
		{
			//greater
			int a,b;
			bool so=true;
			for(int x=0;x<str.length()-1;x++)
			{
				it=symbol.find(str[x]);
				a=it->second;
				it=symbol.find(str[x+1]);
				if(a>=it->second)
				{
					continue;
				}
				else
				{
					so=false;
					break;
				}
			}
			if(!so)
			{
				//less than
				int a;
				so=true;
			    for(int x=0;x<str.length()-1;x++)
			   {  
				it=symbol.find(str[x]);
				a=it->second;
				it=symbol.find(str[x+1]);
				if(a<=it->second)
				{
					continue;
				}
				else
				{
					so=false;
					break;
				}
			   }	
			}
			if(!so)
			{
				//cout<<"sorting ";
				cout<<"error\n";
			    continue;
			}
		}
		ll sum=0;
			for(int i=0;i<str.length();i++)
			{
				it=symbol.find(str[i]);
				sum+=it->second;
			}
			cout<<sum<<endl;
	}
	return 0;	
}
