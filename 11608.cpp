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

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n;
	int I=1;
	while(cin>>n&&n>=0)
	{
		int sum=n;
		printf("Case %d:\n",I++);
		vector<int> have(12);
		for(int i=0;i<12;i++)
		{
			scanf("%d",&have[i]);
		}
		vector<int> need(12);
		for(int i=0;i<12;i++)
		{
			scanf("%d",&need[i]);
		}
		for(int i=0;i<12;i++)
		{
			if(sum>=need[i])
			{
				printf("No problem! :D\n");
				sum-=need[i];
			}
			else
			{
				printf("No problem. :(\n");
			}
			sum+=have[i];
		}
	}
	return 0;
}
