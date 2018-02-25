#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	int t;
	scanf("%d",&t);
	//cin.ignore();
	string str,party;
	bool nexx=false;
	while(t--)
	{
		if(nexx){
			cout<<endl;
			//getline(cin,str);
		}
		nexx=true;
		int n;
		map<string,string> mp;
		map<string,string>::iterator it;
		map<string,int> vote;
		map<string,int>::iterator pt;
		//cout<<" num ";
		scanf("%d",&n);
		getline(cin,str);
		//cout<<"par :";
		for(int i=0;i<n;i++)
		{
			//cout<<"nam :";
			getline(cin,str);getline(cin,party);
			string a,b;
			int l,h;
			for(int i=0;i<str.length();i++)
			{
				if(str[i]!=' ')
				{
					l=i;
					break;
				}
			}
			for(int i=str.length()-1;i>=0;i--)
			{
				if(str[i]!=' ')
				{
					h=i;
					break;
				}
			}
			for(int i=l;i<=h;i++)
			a=a+str[i];
			int L,H;
			for(int i=0;i<party.length();i++)
			{
				if(party[i]!=' ')
				{
					L=i;
					break;
				}
			}
			for(int i=party.length()-1;i>=0;i--)
			{
				if(party[i]!=' ')
				{
					H=i;
					break;
				}
			}
			for(int i=L;i<=H;i++)
			b=b+party[i];
			//cout<<"par :";
			mp[a]=b;
		}
		int m;
		//cout<<"vit ";
		scanf("%d",&m);
		getline(cin,str);
		for(int i=0;i<m;i++)
		{
			//cout<<"vote :";
			getline(cin,str);
			string a;
			int L,H;
			for(int i=0;i<str.length();i++)
			{
				if(str[i]!=' ')
				{
					L=i;
					break;
				}
			}
			for(int i=str.length()-1;i>=0;i--)
			{
				if(str[i]!=' ')
				{
					H=i;
					break;
				}
			}
			for(int i=L;i<=H;i++)
			a=a+str[i];
			it=mp.find(a);
			if(it!=mp.end())
			{
				vote[it->first]++;
			}
		}
		//cout<<"ok\n";
		vector<int> l;
		pt=vote.begin();
		while(pt!=vote.end())
		{
			int d=pt->second;
			l.push_back(d);
			pt++;
		}
		if(l.empty())
		{
			printf("tie\n");
			continue;
		}
		sort(l.begin(),l.end(),greater<int>());
		int mx=l[0];
		int count=0;
		for(int i=1;i<l.size();i++)
		{
			if(l[i]==mx)count++;
			else break;
		}//cout<<"dup ok\n";
		if(count>0)
		{
			printf("tie\n");
			continue;
		}		
		else
		{
			pt=vote.begin();
			while(pt!=vote.end())
			{
				if(pt->second==mx)
				{
					string temp=pt->first;
					it=mp.find(temp);
					cout<<it->second<<endl;
					//break;
				}
				pt++;
			}
		}
	}
}
