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
    int n,m,c;
    int I=1;
    bool first=false;
    Loop(cin>>n>>m>>c&&n)
    {
    	//if(first)cout<<endl;
    	//first=true;
    	vector<int> a(n);
    	a.push_back(1);
    	for(int i=1;i<=n;i++)
    	    cin>>a[i];
    	int total=0;
    	int MINN;
    	vector<bool> b(n+1);
    	std:fill(b.begin(),b.end(),false);
    	bool fire=false;
    	int v;
    	ll sum=0;
    	ll maxx=0;
    	for(int i=0;i<m;i++)
    	{
    		input("%d",&v);
    		if(!fire)
    		{
    			if(b[v]==false)
    			{
    				b[v]=true;
    				sum+=(a[v]);
				}
				else
				{
					b[v]=false;
    				sum-=(a[v]);
				}
				if(sum>c)
				fire=true;
				if(sum>maxx)
				maxx=sum;
			}
		}
		if(fire)
		{
			printf("Sequence %d\n",I++);
            printf("Fuse was blown.\n");
		}
		else
		{
			printf("Sequence %d\n",I++);
			printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",maxx);
		}
		cout<<endl;
	}
	ret 0;
}

