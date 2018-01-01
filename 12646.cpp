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
	vector<int> a(3);
	while(cin>>a[0]>>a[1]>>a[2])
	{
		int sum=a[0]+a[1]+a[2];
		if(sum==0||sum==3)cout<<"*\n";
		else
		{
			if(sum==1){
				if(a[0]==1)cout<<"A\n";
				else if(a[1]==1)cout<<"B\n";
				else cout<<"C\n";
			}
			else
			{
				if(!a[0])cout<<"A\n";
				else if(!a[1])cout<<"B\n";
				else cout<<"C\n";
			}
		}
	}	    
	return 0;
}
