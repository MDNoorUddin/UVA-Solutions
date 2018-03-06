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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	string str;
	scanf("%d",&t);
	getline(cin,str);
	bool con=false;
	while(t--)
	{
		getline(cin,str);
		getline(cin,str);
		if(con)
		cout<<endl;
		con=true;
		string temp;
		int Size=str.length();
		int answer;
		for(int i=0;i<str.length();i++)
		{
			temp=temp+str[i];
			string ans;
			if(Size%temp.length()==0)
			{
				//string ans;
				for(int  j=1;j<=Size/temp.length();j++)
				{
					ans=ans+temp;
				}
			}
			//cout<<ans<<endl;
			if(ans==str)
			{
				answer=temp.length();
				break;
			}
			ans.clear();
		}
		printf("%d\n",answer);
	}
}
