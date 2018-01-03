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
	while(cin>>t)
	{
		int count=0;
		int a;
		for(int i=0;i<5;i++)
		{
			cin>>a;
			if(a==t)count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
