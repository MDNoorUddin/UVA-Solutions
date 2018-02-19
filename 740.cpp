#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


map<string,string> u;
map<string,string> d;


void sieve()
{
	d["00000"]="<";
	u["00000"]=">";
	d["00001"]="T";
	u["00001"]="5";
	d["00010"]="*";
	u["00010"]="@";
	d["00011"]="O";
	u["00011"]="9";
	d["00100"]=" ";
	u["00100"]=" ";
	d["00101"]="H";
	u["00101"]="%";
	d["00110"]="N";
	u["00110"]=",";
	d["00111"]="M";
	u["00111"]=".";
	d["01000"]="=";
	u["01000"]="+";
	d["01001"]="L";
	u["01001"]=")";
	d["01010"]="R";
	u["01010"]="4";
	d["01011"]="G";
	u["01011"]="&";
	d["01100"]="I";
	u["01100"]="8";
	d["01101"]="P";
	u["01101"]="0";
	d["01110"]="C";
	u["01110"]=":";
	d["01111"]="V";
	u["01111"]=";";
	d["10000"]="E";
	u["10000"]="3";
	d["10001"]="Z";
	u["10001"]="\"";
	d["10010"]="D";
	u["10010"]="$";
	d["10011"]="B";
	u["10011"]="?";
	d["10100"]="S";
	u["10100"]="#";
	d["10101"]="Y";
	u["10101"]="6";
	d["10110"]="F";
	u["10110"]="!";
	d["10111"]="X";
	u["10111"]="/";
	d["11000"]="A";
	u["11000"]="-";
	d["11001"]="W";
	u["11001"]="2";
	d["11010"]="J";
	u["11010"]="'";
	//up["11011"]="Shift Down";
	//down["11011"]="Shift Down";
	d["11100"]="U";
	u["11100"]="7";
	d["11101"]="Q";
	u["11101"]="1";
	d["11110"]="K";
	u["11110"]="(";
	//up["11111"]="Shift Up";
	//down["11111"]="Shift Up";
	return;
}
int main()
{
	//freopen("c.txt","w",stdout);
	sieve();
	string up,down;
	getline(cin,up);
	getline(cin,down);
	string str;
	map<string,string>::iterator it;
	while(cin>>str)
	{
		string temp;
		bool Up=false;
		bool Down=true;
		for(int i=0;i<str.length();i++)
		{
			temp=temp+str[i];
			if(temp.length()==5)
			{
				if(temp=="11111")
				{
					Up=true;
					Down=false;
				}
				else if(temp=="11011")
				{
					Down=true;
					Up=false;
				}
				else
				{
					if(Up)
					{
						it=u.find(temp);
						cout<<it->second;
					}
					if(Down)
					{
						it=d.find(temp);
						cout<<it->second;
					}
				}
				temp.clear();
			}
		}
		cout<<endl;
	}
	return 0;
}
