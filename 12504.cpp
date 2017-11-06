#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	string str,sec;
	while(t--)
	{
		map<string,string> mp;
		map<string,string> np;
		map<string,string>::iterator it;
		map<string,string>::iterator jt;
		cin>>str;
		cin>>sec;
		string key;
		string temp;
		vector<string> plus;
		vector<string> minus;
		vector<string> ch;
		int count=0;
		for(int i=1;i<str.length()-1;i++)
		{
			if(str[i]==':')
			{
			   key=temp;
			   temp.clear();	
			}
			else if(str[i]==',')
			{
			   mp[key]=temp;
			   key.clear();
			   temp.clear();
			}
			else
			{
				temp=temp+str[i];
			}
		}
		if(!temp.empty())
		{
			mp[key]=temp;
			temp.clear();
		}
		for(int i=1;i<sec.length()-1;i++)
		{
			if(sec[i]==':')
			{
			   key=temp;
			   temp.clear();	
			}
			else if(sec[i]==',')
			{
			   np[key]=temp;
			   key.clear();
			   temp.clear();
			}
			else
			{
				temp=temp+sec[i];
			}
		}
		if(!temp.empty())
		{
			np[key]=temp;
		}
		for(it=np.begin();it!=np.end();it++)
		{
			jt=mp.find(it->first);
			if(jt!=mp.end())
			{
				if(jt->second!=it->second)
				{
					ch.push_back(it->first);
				}
			}
			else
			{
				plus.push_back(it->first);
			}
		}
		for(it=mp.begin();it!=mp.end();it++)
		{
			jt=np.find(it->first);
			if(jt==np.end())
			minus.push_back(it->first);
		}
		if(plus.empty()&&minus.empty()&&ch.empty())
		{
			printf("No changes\n");
		}
		else
		{
			if(!plus.empty()){
				cout<<"+";
			for(int i=0;i<plus.size()-1;i++)
			{
				cout<<plus[i]<<",";
			}
			cout<<plus[plus.size()-1]<<endl;
           }
           if(!minus.empty()){
           	cout<<"-";
            for(int i=0;i<minus.size()-1;i++)
			{
				cout<<minus[i]<<",";
			}
			cout<<minus[minus.size()-1]<<endl;
		    }
		    if(!ch.empty()){
		    	cout<<"*";
			for(int i=0;i<ch.size()-1;i++)
			{
				cout<<ch[i]<<",";
			}
			cout<<ch[ch.size()-1]<<endl;	
	    	}
	    }
	    cout<<endl;
	}
	return 0;
}
