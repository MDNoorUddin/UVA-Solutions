#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>
#include<string.h>

using namespace std;

#define ll long long
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define e 2.718281828459

map<char,char> mp;
map<char,char>::iterator it;

map<char,char> np;
map<char,char>::iterator itt;
void sieve()
{
	
    string mpo = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string caps = "~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string weird = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
    string weirdcaps = "~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    for(int i=0;i<mpo.length();i++)
    {
     	mp[mpo[i]]=weird[i];
    }
    for(int i=0;i<caps.length();i++)
    {
     	mp[caps[i]]=weirdcaps[i];
    }
    return;
    
}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	string str;
	while(getline(cin,str))
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]==' ')printf(" ");
			else
			{
				it=mp.find(str[i]);
				cout<<it->second;
			}
		}
		cout<<endl;
	}
	return 0;
}          
