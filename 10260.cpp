#include<bits/stdc++.h>
using namespace std;
map<char,int> a;
void sieve()
{
	//a['A']=0;
	a['B']=1;a['C']=2;a['D']=3;
	//a['E']=0;
	a['F']=1;
	a['G']=2;
	//a['H']=0;
	//a['I']=0;
	a['J']=2;a['K']=2;a['L']=4;
	a['M']=5;a['N']=5;
	//a['O']=0;
	a['P']=1;a['Q']=2;
	a['R']=6;a['S']=2;a['T']=3;
	//a['U']=0;
	a['V']=1;
	//a['W']=0;
	a['X']=2;
	//a['Y']=0;
	a['Z']=2;
}
int main()
{
	//freopen("uva.txt","w",stdout);
	sieve();
	string str;
	std::map<char,int>::iterator it;
	while(cin>>str)
	{
		char x;
		x=str[0];
		int prev=a[x];
		for(int i=1;i<str.length();i++)
		{
			x=str[i];
			it=a.find(x);
			if(it!=a.end())
			{
				if(prev!=a[str[i]])
				{
					if(prev!=0)
					cout<<prev;
					prev=a[str[i]];
				}
			}
			else
			{
				if(prev!=0)
				cout<<prev;
				prev=0;
			}
		}
		if(prev!=0)
		cout<<prev;
		cout<<endl;
	}
}
