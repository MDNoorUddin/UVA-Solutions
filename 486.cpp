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

map<string,int> mp;
map<string,int>::iterator it;

void Sieve()
{
	mp["one"]=1;mp["two"]=2;mp["three"]=3;mp["four"]=4;mp["five"]=5;mp["six"]=6;mp["seven"]=7;mp["eight"]=8;mp["nine"]=9;
	mp["ten"]=10;mp["eleven"]=11; mp["twelve"]=12;mp["thirteen"]=13;mp["fourteen"]=14;mp["fifteen"]=15;mp["sixteen"]=16; 
	mp["seventeen"]=17; 
	mp["eighteen"]=18;mp["nineteen"]=19;
    mp["twenty"]=20;mp["thirty"]=30;mp["forty"]=40;mp["fifty"]=50;mp["sixty"]=60;mp["seventy"]=70;mp["eighty"]=80;mp["ninety"]=90;
	mp["hundred"]=100;
    mp["thousand"]=1000;
	mp["million"]=1000000;
}

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	Sieve();
	string str;
	while(getline(cin,str))
	{
		if(str=="zero"){
			cout<<"0\n";continue;
		}
		ll million=0, thousand=0;
		int mil_i=-1,tou_i=-1;
		ll n=1;
		stringstream f(str);
		string temp;
		vector<string> a;
		int i=0;
		bool negative=false;
		while(f>>temp)
		{
			if(temp=="negative")
			{
				negative=true;
				continue;
			}
			if(temp=="million"){
				mil_i=i;
				if(tou_i!=-1)tou_i=-1;
			}
			if(temp=="thousand")tou_i=i;
			//cout<<temp<<endl;
			a.push_back(temp);
			i++;
		}
		if(mil_i!=-1){
			for(int i=0;i<=mil_i;i++)
		    {
			  //cout<<mp[a[i]]<<" ";
			   if(mp[a[i]]>=n)n*=mp[a[i]];
			   else n+=mp[a[i]];
		    }
		//cout<<endl<<n<<endl;
		million=n;
		}
		
		n=1;
		if(tou_i!=-1)
		{
		for(int i=mil_i+1;i<=tou_i;i++)
		{
			//cout<<mp[a[i]]<<" ";
			if(mp[a[i]]>=n)n*=mp[a[i]];
			else n+=mp[a[i]];
		}
		//cout<<endl<<n<<endl;
		thousand=n;
	}
		int index=-1;
		if(tou_i!=-1)index=tou_i+1;
		else if(mil_i!=-1)index=mil_i+1;
		else index=0;
		n=0;
		for(int i=index;i<a.size();i++)
		{
			if(i==index)
			n=1;
			//cout<<mp[a[i]]<<" ";
			if(mp[a[i]]>=n)n*=mp[a[i]];
			else n+=mp[a[i]];
		}
		//cout<<endl<<n<<endl;
		//cout<<"million "<<million<<" thousand "<<thousand<<" small "<<n<<endl;
		million=million+thousand+n;
		if(negative)cout<<"-";
		cout<<million <<endl;
	}
}
