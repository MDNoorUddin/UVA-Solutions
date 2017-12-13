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
	int t;
	int I=1;
	cin>>t;
	int wsh,wsm,weh,wem;
	int msh,msm,meh,mem;
	while(t--)
	{
		scanf("%d:%d %d:%d",&wsh,&wsm,&weh,&wem);
		scanf("%d:%d %d:%d",&msh,&msm,&meh,&mem);
		if(meh<=wsh)
		{
			if(meh==wsh)
			{
				if(mem<wsm)printf("Case %d: Hits Meeting\n",I++);
				else printf("Case %d: Mrs Meeting\n",I++);
			}
			else
			
			printf("Case %d: Hits Meeting\n",I++);
		}
		else if(msh>=weh)
		{
			if(msh==weh)
			{
				if(msm>wem)printf("Case %d: Hits Meeting\n",I++);
				else printf("Case %d: Mrs Meeting\n",I++);
			}
			else
			
			printf("Case %d: Hits Meeting\n",I++);
		}
		else
		   printf("Case %d: Mrs Meeting\n",I++);
	}
	ret 0;
}
