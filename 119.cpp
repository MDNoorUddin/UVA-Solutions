#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	bool g=false;
	while(cin>>t)
	{
		if(g)
		cout<<endl;
		g=true;
		cin.ignore();
		string str[t];
		map<string,int> mp;
		map<string,int>::iterator it;
		for(int i=0;i<t;i++)
		{
			cin>>str[i];
			mp[str[i]]=0;
		}
		for(int i=0;i<t;i++){
			string name,temp;
			int frien,price;
			cin>>name>>price>>frien;
			if(frien!=0){
			int money=price/frien;
			mp[name]=mp[name]-(money*frien);
			cin.ignore();
			for(int j=0;j<frien;j++)
			{
				cin>>temp;
				mp[temp]=mp[temp]+money;
			}
		}
		}
		for(int i=0;i<t;i++)
		{
			cout<<str[i]<<" "<<mp[str[i]]<<endl;
		}
		//cout<<endl;
	}
}
