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
#define E 2.7182818284
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	string str;
	cin>>t;
	getline(cin,str);getline(cin,str);
	string a,b;
	while(t--)
	{
		getline(cin,a);
		getline(cin,b);
		cout<<b<<endl;
		cout<<a<<endl;
		map<char,char> mp;
		map<char,char>::iterator it;
		for(int i=0;i<a.length();i++)
		{
			mp[a[i]]=b[i];
		}
		while(getline(cin,str))
		{
			if(str=="")break;
			for(int i=0;i<str.length();i++)
			{
				it=mp.find(str[i]);
				if(it!=mp.end())cout<<it->second;
				else cout<<str[i];
			}
			cout<<endl;
		}
		if(t)cout<<endl;
	}
	return 0;	
}
