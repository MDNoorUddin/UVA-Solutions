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
	int I=1;
	//vector<int> a(13);
	int j;
	while(t--)
	{
		bool b=false;
		for(int i=1;i<=13;i++)
		{
			cin>>j;
			if(j==0)b=true;
		}
		if(b)printf("Set #%d: No\n",I++);
		else printf("Set #%d: Yes\n",I++);
	}
	return 0;
}
