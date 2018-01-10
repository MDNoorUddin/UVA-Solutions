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
#include<bits/stdc++.h>
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
	//freopen("c.txt","w",stdout);
	string str;
	while(getline(cin,str)&&str!="*")
	{
		stringstream f(str);
		string temp;
		int count=0;
		char t;
		bool france=true;
		while(f>>temp)
		{
			//cout<<temp.at(0)<<" ";
			if(count==0)t=tolower(temp.at(0));
			else
			{
				if(tolower(temp.at(0))!=t)
				{
					france=false;
					break;
				}
			}
			count++;
		}
		if(france)cout<<"Y\n";
		else cout<<"N\n";
	}
	return 0;
}          
