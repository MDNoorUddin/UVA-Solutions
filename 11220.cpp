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
	int t;
	cin>>t;
	cin.ignore();
	int I=1;
	string str;
	getline(cin,str);
	while(t--)
	{
		if(I!=1)cout<<endl;
		printf("Case #%d:\n",I++);
		while(true)
		{
			getline(cin,str);
			if(str=="")break;
			int count=0;
			stringstream f(str);
			string temp;
			while(f>>temp)
			{
				if(temp.size()>=count+1)
				{
					cout<<temp[count];count++;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}          
