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
char border;
void maze(int i,int j,char mount,int k)
{
	if(str[i][j]==mount&&k!=0)return;
	k++;
	if(str[i][j]==border)return;
	str[i][j]=mount;
	if(j+1<str[i].length())
	maze(i,j+1,mount,k);
	if(j-1>=0)
	maze(i,j-1,mount,k);
	if(i+1<str.size())
	maze(i+1,j,mount,k);
	if(i-1>=0)
	maze(i-1,j,mount,k);
	return;
}

int main(int argc, char** argv){
	string test;
	while(getline(cin,test)){
		str.push_back(test);
		while(true){
			getline(cin,test);
			if(test[0]=='_')
			{
				bool Find=false;
				for(int i=0;i<str.size();i++)
				{
					for(int j=0;j<str[i].length();j++)
					{
						if(str[i][j]!=' ')
						{
							border=str[i][j];
							Find=true;
							break;
						}
					}
					if(Find)break;
				}

				for(int i=0;i<str.size();i++)
				{
					for(int j=0;j<str[i].length();j++)
					{
						if(str[i][j]!=' '&&str[i][j]!=border)
						{
							maze(i,j,str[i][j],0);
						}
					}
				}
				//maze(I,J);
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
