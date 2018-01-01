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
	scanf("%d",&t);
	string str;
	int a,b,c;
	int mn_year=9999;
	int mx_year=0;
	string mn,mx;
	int min_month,min_day;
	int max_month,max_day;
	while(t--)
	{
		cin>>str>>a>>b>>c;
		cin.ignore();
		if(c<mn_year)
		{
			mn_year=c;
			min_day=a;
			min_month=b;
			mn=str;
		}
		else if(c==mn_year)
		{
			if(b<min_month)
			{
					mn_year=c;
			        min_day=a;
			        min_month=b;
			        mn=str;
			}
			else if(b==mn_year)
			{
				if(a<min_day)
				{
					mn_year=c;
			        min_day=a;
			        min_month=b;
			        mn=str;
				}
			}
		}
		if(c>mx_year)
		{
			mx_year=c;
			max_day=a;
			max_month=b;
			mx=str;
		}
		else if(c==mx_year)
		{
			if(b>max_month)
			{
					mx_year=c;
			        max_day=a;
			        max_month=b;
			        mx=str;
			}
			else if(b==mn_year)
			{
				if(a>max_day)
				{
					mx_year=c;
			        max_day=a;
			        max_month=b;
			        mx=str;
				}
			}
		}
	}
	cout<<mx<<endl;
	cout<<mn<<endl;
	return 0;
}
