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
	int j,r;
	while(cin>>j>>r)
	{
		vector<int> a(j);
		fill(a.begin(),a.end(),0);
		int h;
		for(int i=0;i<r;i++)
		{
			for(int k=0;k<j;k++)
			{
				cin>>h;
				a[k]+=h;
			}
		}
		int mx=0;
		int index;
		for(int i=0;i<j;i++)
		{
			if(a[i]>=mx)
			{
				mx=a[i];
				index=i+1;
			}
		}
		printf("%d\n",index);
	}
	return 0;
}
