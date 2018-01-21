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
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define E 2.718281828459
#define ii pair<int, int>

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	scanf("%d",&t);
	int n,I=1;
	while(t--)
	{
		scanf("%d",&n);
		vector<int> a(n);
		for(int i=0;i<n;i++)scanf("%d",&a[i]);
		int count=0;
		int y=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==y)
			{
				//cout<<"adding "<<a[i]<<endl;
				count++;y++;
			}
		}
		printf("Case %d: %d\n",I++,n-count);
	}
	return 0;
}         
