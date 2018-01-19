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

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	scanf("%d",&t);
	int I=1;
	int n,y;
	float x,Y,dis;
	while(t--)
	{
		printf("Case %d:\n",I++);
		scanf("%d%d",&n,&y);
		vector<float> wifix(n);
		vector<float> wifiy(n);
		vector<float> wifir(n);
		for(int i=0;i<n;i++)
		{
			scanf("%f%f%f",&wifix[i],&wifiy[i],&wifir[i]);
		}
		for(int i=0;i<y;i++)
		{
			scanf("%f%f",&x,&Y);
			
			bool f=false;
			for(int k=0;k<n;k++)
			{	
		        //cout<<sqrt(((x - wifix[k])*(x - wifix[k]))+((Y - wifiy[k])*(Y - wifiy[k])))<<endl;
		        dis=sqrt(((x - wifix[k])*(x - wifix[k]))+((Y - wifiy[k])*(Y - wifiy[k])));
				if(dis<=wifir[k])
				{		
					f=true;
					break;
				}
			}
			if(f)printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}         
