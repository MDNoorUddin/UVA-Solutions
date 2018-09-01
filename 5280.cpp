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

typedef long long ll;

vector<string> str;

void maze(int i,int j)
{
	if(str[i][j]=='#')return;
	if(str[i][j]!=' '&&str[i][j]!='*')return;
	str[i][j]='#';
	if(j+1<str[i].length())
	maze(i,j+1);
	if(j-1>=0)
	maze(i,j-1);
	if(j+1<str[i].length()&&i+1<str.size())
	maze(i+1,j+1);
	if(j-1>=0&&i+1<str.size())
	maze(i+1,j-1);
	if(i+1<str.size())
	maze(i+1,j);
	if(j+1<str[i].length()&&i-1>=0)
	maze(i-1,j+1);
	if(j-1>=0&&i-1>=0)
	maze(i-1,j-1);
	if(i-1>=0)
	maze(i-1,j);
	return;
}

int main(int argc, char** argv){
	int t;
	cin>>t;
	cin.ignore();
	string test;
	int c=0;
	while(t--){
		while(true){
			getline(cin,test);
			if(test[0]=='_')
			{
				int I=0,J=0;
				for(int i=0;i<str.size();i++)
				{
					for(int j=0;j<str[i].length();j++)
					{
						if(str[i][j]=='*')
						{
							I=i;
							J=j;
							break;
						}
					}
				}
				maze(I,J);
				for(int i=0;i<str.size();i++)
				{
					cout<<str[i]<<endl;
				}
				cout<<test<<endl;
				str.clear();
				break;
			}
			else str.push_back(test);
		}
	}
}
