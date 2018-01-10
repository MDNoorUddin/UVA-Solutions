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
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define e 2.718281828459

map<int,char> mp;
map<int,char>::iterator it;

void sieve()
{
	mp[1]='I';
	mp[2]='Z';
	mp[3]='E';
	mp[4]='A';
	mp[5]='S';
	mp[6]='G';
	mp[7]='T';
	mp[8]='B';
	mp[9]='P';
	mp[0]='O';
}


int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	int t;
	cin>>t;
	cin.ignore();
	string str;
	int p=0;
	while(t--)
	{
		if(p)cout<<endl;
		p++;
		while(true){
		getline(cin,str);
		if(str=="")break;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>=48&&str[i]<=57)
			{
				it=mp.find(str[i]-48);
				cout<<it->second;
			}
			else cout<<str[i];
		}
		cout<<endl;
	}
	}
	return 0;
}          
