#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
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
map<string,int> month;
map<string,int> week;
map<string,int>::iterator it;
void sieve()
{
	month["JAN"]=31;
	month["FEB"]=28;
	month["MAR"]=31;
	month["APR"]=30;
	month["MAY"]=31;
	month["JUN"]=30;
	month["JUL"]=31;
	month["AUG"]=31;
	month["SEP"]=30;
	month["OCT"]=31;
	month["NOV"]=30;
	month["DEC"]=31;
	
	week["SUN"]=1;
	week["MON"]=2;
	week["TUE"]=3;
	week["WED"]=4;
	week["THU"]=5;
	week["FRI"]=6;
	week["SAT"]=7;
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout
	sieve();
	int t;
	cin>>t;
	cin.ignore();
	string a,b;
	while(t--)
	{
		cin>>a>>b;
		it=month.find(a);
		int mon=it->second;
		it=week.find(b);
		int day=it->second;
		int count=0;
		int i=1;
		while(i<=mon)
		{
			if(day==6||day==7)count++;
			if(day==7)day=0;
			i++;
			day++;
		}
		cout<<count<<endl;
	}
	ret 0;
}
