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


using namespace std;


#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI 3.1415

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	string str;
	string mx="";
	while(cin>>str)
	{
		if(str=="E-N-D")
		break;
		string temp;
		int index1=0,index2=str.length()-1;
		int j=str.length()-1;
		int i=0;
		bool digit=false;
		while(j>=0)
		{
			if((str[j]>=65&&str[j]<=90)||(str[j]>=97&&str[j]<=122)||str[i]=='-')
			{
				index2=j;
				break;
			}
			j--;
		}
		while(i<str.length())
		{
			if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)||str[i]=='-')
			{
				index1=i;
				break;
			}
			i++;
		}
		for(int i=index1;i<=index2;i++)
		{
			if(isdigit(str[i]))
			{
				digit=true;
				break;
			}
			temp=temp+str[i];
		}
		if(digit)continue;
		if(mx.empty())
		{
			mx=temp;
		}
		else
		{
			if(temp.length()>mx.length())
			{
				mx=temp;
				temp.clear();
			}
		}
	}
	//cout<<mx<<endl;
	for(int i=0;i<mx.length();i++)
	{
		if(mx[i]<97&&mx[i]!='-')mx[i]+=32;
		cout<<mx[i];
	}
	cout<<endl;
	return 0;
}
