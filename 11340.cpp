#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		map<char,int> mp;
		map<char,int>::iterator it;
		int n;
		scanf("%d",&n);
		char c;
		int a;
		while(n--)
		{
			cin>>c>>a;
			mp[c]=a;
		}
		cin>>n;
		cin.ignore();
		string str;
		double cents=0;
		while(n--)
		{
			getline(cin,str);
			for(int i=0;i<str.length();i++)
			{
				it=mp.find(str[i]);
				if(it!=mp.end())
				{
					cents+=it->second;
				}
			}
		}
		cents/=100.00;
		printf("%.2lf$\n",cents);
	}
	return 0;
}
