#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int group;
	while(cin>>group&&group)
	{
		cin.ignore();
		cin>>str;
		string temp;
		group=str.length()/group;
		for(int i=0,j=1;i<str.length();i++,j++)
		{
			temp=temp+str[i];
			if(j%group==0)
			{
				reverse(temp.begin(),temp.end());
				cout<<temp;
				temp.clear();
			}
		}
		cout<<endl;
	}
	return 0;
}
