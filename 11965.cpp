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
	int t,n;
	cin>>t;
	int I=1;
	string str;
	while(t--)
	{
		printf("Case %d:\n",I++);
		cin>>n;cin.ignore();
		for(int i=1;i<=n;i++)
		{
			char c;
			bool space=false;
		    while(true)
		    {
			  scanf("%c",&c);
			  if(c=='\n')break;
			  if(c==' ')
			  {
			  	if(!space)
			  	{
			  		cout<<c;
			  		space=true;
				}
			  }
			  else {
			  	cout<<c;space=false;
			  }
		    }
		    cout<<endl;
		}
		if(t!=0)cout<<endl;
	}
	return 0;
}          
