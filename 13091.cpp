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
	int t;
	cin>>t;
	int I=1;
	while(t--)
	{
		cin.ignore();
		char a[5][5];
		int len;
		bool p=false;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>a[i][j];
				if(i==0&&a[i][j]=='|'&&!p)
				{
					len=j;
					p=true;
				}
			}
		}
		bool no=false;
		bool thik=false;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<=len;j++)
			{
				if(a[i][j]=='>')
				{
					thik=true;
					break;					
				}
				if(a[i][j]=='<')
				{
					no=true;
					break;
				}
			}
			if(thik||no)
			break;
		}
		if(no||thik)
		{
			if(no)printf("Case %d: No Ball\n",I++);
			else printf("Case %d: Thik Ball\n",I++);
		}
		else
		{
			for(int i=0;i<5;i++)
		    {
			for(int j=len+1;j<5;j++)
			{
				if(a[i][j]=='>')
				{
					no=true;
					break;					
				}
				if(a[i][j]=='<')
				{
					thik=true;
					break;
				}
			}
			if(thik||no)
			break;
	    	}
	    	if(no)printf("Case %d: No Ball\n",I++);
			else printf("Case %d: Thik Ball\n",I++);
		}
	}
	return 0;
}                   
