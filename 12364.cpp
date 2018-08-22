#include<iostream>
#include<vector>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<set>
#include<stdio.h>
#include<math.h>

typedef long long ll;

#define PI acos(-1)

#define E 2.718281828459

using namespace std;

vector<string> a(10);
void sieve()
{
	a[1]="*...";
	a[2]="*.*.";
	a[3]="**..";
	a[4]="**.*";
	a[5]="*..*";
	a[6]="***.";
	a[7]="****";
	a[8]="*.**";
	a[9]=".**.";
	a[0]=".***";
}

int main() {
	sieve();
	int n;
	string str;
	while(cin>>n&&n)
	{
		cin.ignore();
		getline(cin,str);
		if(str=="S")
		{
			string ans;
			cin>>ans;
			for(int j=1;j<=3;j++)
			{
				for(int i=0;i<ans.length();i++)
				{
					if(j==1)
					{
						if(i!=0)cout<<" ";
						char x=ans[i]-48;
						int h=x;
						//cout<<h<<endl;
						cout<<a[h][0]<<a[h][1];
					}
					else if(j==2)
					{
					    if(i!=0)cout<<" ";
						char x=ans[i]-48;
						int h=x;
						cout<<a[h][2]<<a[h][3];
					}
					else
					{
						if(i!=0)cout<<" ";
	     				cout<<"..";
					}
				}
				cout<<endl;
			}

		}
		else
		{
			string a1,a2,a3;
			getline(cin,a1);
			getline(cin,a2);
			getline(cin,a3);
			//cout<<a1<<endl<<a2<<endl<<a3<<endl;
			for(int i=0;i<a1.length();i+=3)
			{

				string temp;
				temp=temp+a1[i];
				temp=temp+a1[i+1];
				//cout<<"------------ "<<temp<<" ------------------"<<endl;
				if(temp=="*.")
				{
					if(a2[i]=='.'&&a2[i+1]=='.')cout<<1;
					else if(a2[i]=='*'&&a2[i+1]=='.')cout<<2;
					else if(a2[i]=='.'&&a2[i+1]=='*')cout<<5;
					else cout<<8;
				}
				else if(temp=="**")
				{
					if(a2[i]=='.'&&a2[i+1]=='.')cout<<3;
					else if(a2[i]=='*'&&a2[i+1]=='.')cout<<6;
					else if(a2[i]=='.'&&a2[i+1]=='*')cout<<4;
					else cout<<7;
				}
				else
				{
					if(a2[i+1]=='.')cout<<9;
					else cout<<0;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
