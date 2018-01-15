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
#include<string.h>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define e 2.718281828459

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int heads,knights;
	while((scanf("%d%d",&heads,&knights)==2)&&heads)
	{
		vector<int> h(heads);
		vector<int> k(knights);
		for(int i=0;i<heads;i++)
		{
			scanf("%d",&h[i]);
		}
		for(int i=0;i<knights;i++)
		{
			scanf("%d",&k[i]);
		}
		if(heads>knights)
		{
			printf("Loowater is doomed!\n");
			continue;
		}
		sort(h.begin(),h.end());
		sort(k.begin(),k.end());
		int matha=heads;
		ll sum=0;
		for(int i=0,j=0;i<k.size()&&j<h.size();i++)
		{
			if(k[i]>=h[j])
			{
				sum+=k[i];
				j++;
				matha--;
			}
		}
		if(matha==0)printf("%lld\n",sum);
		else printf("Loowater is doomed!\n");
	}
	return 0;
}          
