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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	string str;
	while(getline(cin,str))
	{
		multimap<string, string> xs;
		vector<string> a;
		map<string,int> mp;
		map<string,int>::iterator jt;
		if(str=="0")break;
		while(str!="1")
		{
			string key=str;
			a.push_back(str);
			set<string> dup;
			while(true)
			{
				getline(cin,str);
				if(str[0]>=97&&str[0]<=122)
				{
					//xs.insert(std::make_pair(key, str));
					dup.insert(str);
					//mp[str]++;
				}
				else break;
			}
			for(set<string>::iterator it=dup.begin();it!=dup.end();it++)
			{
				mp[*it]++;xs.insert(std::make_pair(key, *it));
			}
		}
		vector<pair< string,int> > answer;
		//vector<pair< string,int> >:: IT;
		for(int i=0;i<a.size();i++)
		{
			int count=0;
			std::pair<std::multimap<string, string>::iterator,std::multimap<string, string>::iterator> r = xs.equal_range(a[i]);
			for (std::multimap<string, string>::iterator it = r.first;it != r.second; ++it)
              {
              	  //std::cout << it->first << " : " << it->second << " "<<mp[it->second]<<std::endl;
              	  if(mp[it->second]==1)
              	  {
              	  	//cout<<"adding "<<it->second<<endl;
              	  	count++;
					}
			  }
			  answer.push_back(make_pair(a[i],count));
		} 
		/*for(int i=0;i<answer.size();i++)
		cout<<answer[i].first<<" "<<answer[i].second<<endl;      
         /*cout<<"------------------------------------\n";
         multimap<string, string>::iterator it;
         for(it=xs.begin();it!=xs.end();it++)
         {
         	cout<<it->first<<" "<<it->second<<endl;
		 }*/
		 for(int i=0;i<answer.size()-1;i++)
		 {
		 	for(int j=0;j<answer.size()-1;j++)
		 	{
		 		if(answer[j].second<answer[j+1].second)
		 		{
		 			swap(answer[j],answer[j+1]);
				}
				if(answer[j].second==answer[j+1].second)
		 		{
		 			if(answer[j].first>answer[j+1].first)
		 			swap(answer[j],answer[j+1]);
				}
				 
			 }
		 }
		 for(int i=0;i<answer.size();i++)
		cout<<answer[i].first<<" "<<answer[i].second<<endl; 
	}
}
