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
	int n,l;
	while(t--)
	{
		cin>>n>>l;
		vector<int> man(n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>man[i];
			sum+=man[i];
		}
		int x;
		if(sum>l){
			for(int i=0;i<n;i++)cin>>x;
			printf("Case %d: No\n",I++);
		}
		else
		{
			bool j=false;
			int h;
			for(int i=0;i<n;i++)
			{
				cin>>h;
				if(j)continue;
				if(h<man[i])j=true;
			}
			if(j)printf("Case %d: No\n",I++);
			else printf("Case %d: Yes\n",I++);
		}
	}
	return 0;
}
