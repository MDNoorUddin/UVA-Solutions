#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>
#include<string.h>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define e 2.718281828459

int main(int argc, char** argv) {
	string str;
	set<string> mp;
	set<string>::iterator it;
	string temp;
	while(getline(cin,str))
	{
		if(str!=""){
		for(int i=0;i<str.length()-1;i++)
		{
			if(((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))||str[i]=='-')
			{
				if((str[i]>=65&&str[i]<=90))
				   str[i]=str[i]+32;
				temp=temp + str[i];
			}
			else 
			{
				if(!temp.empty())
				mp.insert(temp);
				temp.clear();
			}
		}
		if(str[str.length()-1]!='-')
		{
			if((str[str.length()-1]>=65&&str[str.length()-1]<=90)||(str[str.length()-1]>=97&&str[str.length()-1]<=122))
			{
				if((str[str.length()-1]>=65&&str[str.length()-1]<=90))
				   str[str.length()-1]=str[str.length()-1]+32;
				   temp=temp+str[str.length()-1];
			}
			mp.insert(temp);
			temp.clear();
		}
	  }
	}
	it=mp.begin();
	while(it!=mp.end()) 
    {
    	if(*it!="")
    	cout<<*it<<endl;
    	it++;
    }
	return 0;
}          
