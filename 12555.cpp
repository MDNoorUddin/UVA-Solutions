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
	scanf("%d",&t);
	int I=1;
	while(t--)
	{
		int n;
		string str;
		cin>>n;
		cin.ignore();
		getline(cin,str);
		double ans,k;
		if(str.length()<3)
		{
			ans=0.5*n;
		}
		else
		{
			int x=str[2]-48;
			k=0.05*x;
			ans=0.5*n;
			ans=ans+k;
		}
		printf("Case %d: ",I++);
		cout<<ans<<endl;
	}
	return 0;
}
