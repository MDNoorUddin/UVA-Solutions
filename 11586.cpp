#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--)
	{
		getline(cin,str);
		int male=0,female=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='F')female++;
			if(str[i]=='M')male++;
		}
		if(male==1||female==1)cout<<"NO LOOP\n";
		else
		{
			if(male==female)cout<<"LOOP\n";
			else cout<<"NO LOOP\n";
		}
	}
}
