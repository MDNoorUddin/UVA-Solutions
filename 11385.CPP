#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
//#define MAX 999999999999999999
#define MIN 0
map<int,ll> mp;
map<int,ll>::iterator it;
void sieve();
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		string str;
		cin>>n;
		vector<ll> a(n);
		int MAX=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>MAX)
			   MAX=a[i];
		}
		it=mp.find(MAX);
		MAX=it->second;
		cin.ignore();
		getline(cin,str);
		string s;
		vector<char> o(MAX);
		fill(o.begin(),o.end(),' ');
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>=65&&str[i]<=90)
			s=s+str[i];
		}
		int tr=0;
		for(int i=0;i<n;i++)
		{
			//cout<<"a[i]="<<a[i]<<" ";
			it=mp.find(a[i]);
			//cout<<it->first<<" "<<it->second<<endl;
			o[it->second-1]=s[i];
			if(it->second-1>tr)
			tr=it->second-1;
		}
		bool space=false;
		for(int j=0;j<=tr;j++)
		{
				cout<<o[j];
		}
		cout<<endl;
	}
	ret 0;
}
void sieve()
{
	mp[1]=1;
	mp[2]=2;
	mp[3]=3;
	ll prev1=mp[2];
	ll prev2=mp[3];
	int count=4;
	ll temp;
	while(count<=45)
	{
		temp=prev1+prev2;
		mp[temp]=count;
		prev1=prev2;
		prev2=temp;
		//cout<<temp<<endl;
		count++;
	}
}
