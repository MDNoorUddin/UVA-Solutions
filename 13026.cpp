#include<stdio.h>
#include<iostream>
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
	cin>>t;
	int n;
	int I=1;
	while(t--)
	{
		cin>>n;
		cin.ignore();
		vector<string> str(n);
		for(int i=0;i<str.size();i++)
		cin>>str[i];
		string m;
		cin>>m;
		printf("Case %d:\n",I++);
		for(int i=0;i<n;i++)
		{
			int count=0;
			for(int j=0;j<m.length();j++)
			{
				if(str[i][j]!=m[j])
				count++;
			}
			if(count<=1)cout<<str[i]<<endl;
		}
	}
	return 0;
}
