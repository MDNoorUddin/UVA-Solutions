#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
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

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	
	int m,n;
	int I=1;
	while(cin>>m>>n&&m)
	{
		vector<int> a(m);
		for(int i=0;i<m;i++)
		cin>>a[i];
		vector<int> b(n);
		for(int i=0;i<n;i++)
		cin>>b[i];
		sort(a.begin(),a.end(),greater<int>());
		sort(b.begin(),b.end(),greater<int>());
		if(m==n)
		printf("Case %d: 0\n",I++);
		else
		{
			int y=m-n;
			if(y<0)y=0;
			if(y==0) printf("Case %d: 0\n",I++);
			else
			printf("Case %d: %d %d\n",I++,y,a[a.size()-1]);
		}
	}
	ret 0;
}
