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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	string str;
	while(getline(cin,str))
	{
		if(str=="e/o/i")break;
		int i=0;
		bool vo=false;
		int count=0;
		while(i<str.length())
		{
			if(str[i]=='/'){
				//if(vo)count++;
				i++;break;
			}
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
			vo=true;
			else
			{
				if(vo)count++;
				vo=false;
			}
			i++;
		}
		if(vo)count++;
		//cout<<count<<" ";
		if(count==5)
		{
			vo=false;
			count=0;
			while(i<str.length())
		    {
			if(str[i]=='/'){
				//if(vo)count++;
				i++;break;
			}
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
			vo=true;
			else
			{
				if(vo)count++;
				vo=false;
			}
			i++;
		   }
		   if(vo)count++;//cout<<count<<" ";
		   if(count==7)
		   {
		   	   vo=false;
			   count=0;
			while(i<str.length())
		    {
			      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
			         vo=true;
		      	else
			   {
				if(vo)count++;
				vo=false;
			   }
			i++;
		   }
		   if(vo)count++;//cout<<count<<" \n";
		   if(count==5)cout<<"Y\n";
		   else cout<<3<<endl;
		   }
		   else
		   {
		   	cout<<2<<endl;
		   }
		}
		else
		{
			cout<<1<<endl;
		}
	}
	return 0;
}
