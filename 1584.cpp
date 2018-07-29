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
#include<bitset>
#include<string.h>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459
#define g 9.81


int main(int argc, char** argv) {
    int t;
    cin>>t;
    cin.ignore();
    string str;
    while(t--)
    {
    	cin>>str;
    	char mn;
    	mn=str[0];
    	vector<string> ans;
    	for(int i=1;i<str.length();i++)
    	{
    		if(str[i]<mn)
    		{
    			mn=str[i];
			}
		}
		//cout<<"DONE";
			for(int j=0;j<str.length();j++)
			{
				if(str[j]==mn)
				{
					string temp;
					temp=temp+mn;
					int I=j+1;
					while(true)
					{
						if(I==str.length())I=0;
						if(I==j)break;
						
						temp=temp+str[I];
						I++;
					}
					ans.push_back(temp);
				}
			}
			
			if(!ans.empty()){
			sort(ans.begin(),ans.end());
			cout<<ans[0]<<endl;
		}
			else
			cout<<"empty\n";
	}
	return 0;
}
