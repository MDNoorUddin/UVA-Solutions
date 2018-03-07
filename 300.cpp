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
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

map<string,int> mp;
map<string,int>::iterator it;
map<int,string> d;
map<int,string>::iterator jt;
typedef long long ll;

void sieve();
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	int t;
	cin>>t;
	cout<<t<<endl;
	int day,year;
	string str;
	for(int i=0;i<t;i++)
	{
		scanf("%d.",&day);
		//getline(cin,str);
		cin>>str;
		cin>>year;
		int total_day=(year*365)+mp[str]+day+1;
		//cout<<total_day<<" ";
		int Year=total_day/260;
		float Y=(total_day/260.00)*1.00;
		string Month=d[total_day%20];
		int cycle=total_day%13;
		if(cycle==0)cycle=13;
		if(Year==Y)Year--;
		//cout<<cycle<<" "<<Month<<" "<<Year<<" "<<Y<<endl;
		cout<<cycle<<" "<<Month<<" "<<Year<<endl;
	}
}

void sieve()
{
	//mayan month
	mp["pop"]=0;mp["no"]=20;mp["zip"]=40;mp["zotz"]=60;mp["tzec"]=80;mp["xul"]=100;mp["yoxkin"]=120;mp["mol"]=140;mp["chen"]=160;
	mp["yax"]=180;mp["zac"]=200;mp["ceh"]=220;mp["mac"]=240;mp["kankin"]=260;mp["muan"]=280;mp["pax"]=300;mp["koyab"]=320;
	mp["cumhu"]=340;mp["uayet"]=360;
	
	//mayan day name
	d[1]="imix";d[2]="ik";d[3]="akbal";d[4]="kan";d[5]="chicchan";d[6]="cimi";d[7]="manik";d[8]="lamat";d[9]="muluk";
	d[10]="ok";d[11]="chuen";d[12]="eb";d[13]="ben";d[14]="ix";d[15]="mem";
	d[16]="cib";d[17]="caban";d[18]="eznab";d[19]="canac";d[0]="ahau"; 
}
