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
	int N,M;
	while(cin>>N>>M)
	{
		int j;
		int count=N;
		for(int i=1;i<=N;i++)
		{
			bool no=false;
			for(int k=1;k<=M;k++)
			{
				cin>>j;
				if(!no)
				{
					if(j==0)no=true;
				}
			}
			if(no)count--;
		}
		cout<<count<<endl;
	}
	return 0;
}
