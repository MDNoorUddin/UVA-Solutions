#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	cin.ignore();
	cin.ignore();
	while(t--)
	{
	map<int,string> mp;
	map<int,string>::iterator it;
	string p,value;
	getline(cin,p);
	stringstream f(p);
	int x;
	vector<int> index;
	while(f>>x)
	{
		index.push_back(x);
	}
	//cout<<index.size()<<endl;
	getline(cin,value);
	stringstream g(value);
	vector<string> vl;
	string temp;
	while(g>>temp)
	{
		vl.push_back(temp);
	}
	//cout<<vl.size()<<endl;
	for(int i=0;i<vl.size();i++)
	{
		mp[index[i]]=vl[i];
	}
	it=mp.begin();
	while(it!=mp.end())
	{
		cout << it->second << endl;
		it++;
	}
	if(t){
	cout<<endl;
	cin.ignore();
    }
   }
   return 0;
}
