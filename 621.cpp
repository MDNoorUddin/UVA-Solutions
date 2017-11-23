#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--)
	{
		cin>>str;
		if(str=="1"||str=="4"||str=="78")
		{
			cout<<"+\n";
		}
		else if(str[str.size()-1]=='5'&&str[str.size()-2]=='3')
			cout<<"-\n";
		else if(str[0]=='9'&&str[str.size()-1]=='4')
		cout<<"*\n";
		else
		  cout<<"?\n";
	}
}
