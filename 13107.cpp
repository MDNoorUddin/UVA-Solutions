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
	string str;
	while(cin>>str)
	{
		map<char,int> mp;
		map<char,int>::iterator it;
		int count=1;
		for(int i=0;i<str.length();i++)
		{
			it=mp.find(str[i]);
			if(it!=mp.end())
			{
				cout<<mp[str[i]];
			}
			else
			{
				if(count==2)
				{
					mp[str[i]]=5;
					cout<<5;
					count++;
				}
				else if(count==5)
				{
					mp[str[i]]=2;
					cout<<2;
					count++;
				}
				else if(count==6)
				{
					mp[str[i]]=9;
					cout<<9;
					count++;
				}
				else if(count==9)
				{
					mp[str[i]]=6;
					cout<<6;
					count++;
				}
				else
				{
					//mp[str[i]]=count++;
					int temp= count++;
					stringstream f;
					f<<temp;
					string st;
					f>>st;
					for(int ii=0;ii<st.length();ii++)
					{
						if(st[ii]=='2'){cout<<'5';st[ii]='5';
						}
						else if(st[ii]=='5'){
							cout<<'2';
							st[ii]='2';
						}
						else if(st[ii]=='6'){
							cout<<'9';
							st[ii]='9';
						}
						else if(st[ii]=='9')
						{
							cout<<'6';
							st[ii]='6';
						}
						else cout<<st[ii];
					}
					stringstream F(st);
					int tem;
					F>>tem;
					mp[str[i]]=tem;
				}
			}
		}
		//cout<<endl<<count;
		cout<<endl;
	}
	return 0;
}
