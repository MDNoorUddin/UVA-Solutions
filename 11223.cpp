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
#include<string.h>

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

map<string,string> mp;
map<string,string>::iterator it;

void sieve()
{
    mp[".-"]="A";
    mp[".---"]="J";
   mp["..."]="S";
   mp[".----"]="1";
   mp[".-.-.-"]=".";
   mp["---..."]=":";
   mp["-..."]="B";
   mp["-.-"]="K";
   mp["-"]="T";
   mp["..---"]="2";
   mp["--..--"]=",";
   mp["-.-.-."]=";";
   mp["-.-."]="C";
   mp[".-.."]="L";
   mp["..-"]="U";
   mp["...--"]="3";
   mp["..--.."]="?";
   mp["-...-"]="=";
   mp["-.."]="D";
mp["--"]="M";
mp["...-"]="V";
mp["....-"]="4";
mp[".----."]="'";
mp[".-.-."]="+";
mp["."]="E";
mp["-."];
mp[".--"]="W";
mp["....."]="5";
mp["-.-.--"]="!";
mp["-....-"]="-";
mp["..-."]="F";
mp["---"]="O";
mp["-..-"]="X";
mp["-...."]="6";
mp["-..-."]="/";
mp["..--.-"]="_";
mp["--."]="G";
mp[".--."]="P";
mp["-.--"]="Y";
mp["--..."]="7";
mp["-.--."]="(";
mp[".-..-."]="\"";
mp["...."]="H";
mp["--.-"]="Q";
mp["--.."]="Z";
mp["---.."]="8";
mp["-.--.-"]=")";
mp[".--.-."]="@";
mp[".."]="I";
mp[".-."]="R";
mp["-----"]="0";
mp["----."]="9";
mp[".-..."]="&";
mp["-."]="N";
}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	bool c=false;
	scanf("%d",&n);
	cin.ignore();
	string str;
	int I=1;
	while(n--)
	{
		if(c)cout<<endl;
		c=true;
		printf("Message #%d\n",I++);
		getline(cin,str);
		string temp;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]==' ')
			{
				if(!temp.empty())
				{
					it=mp.find(temp);
	      			cout<<it->second;
		    		temp.clear();
				}
				else cout<<" ";
			}
			else
			{
				temp=temp+str[i];
			}
		}
		if(!temp.empty())
			{
				it=mp.find(temp);
				cout<<it->second;
				temp.clear();
			}
			cout<<endl;
	}
	return 0;
}          
