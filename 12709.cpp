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

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	while(cin>>t&&t)
	{
		vector<int> L(t);
		vector<int> W(t);
		vector<int> H(t);
		int maxx=0;
		for(int i=0;i<t;i++)
		{
			cin>>L[i]>>W[i]>>H[i];
			if(H[i]>maxx)
			   maxx=H[i];
		}
		int wimax=0;
		for(int i=0;i<t;i++)
		{
			if(H[i]==maxx)
			   {
			   	 if(L[i]*H[i]*W[i]>wimax)
			   	 wimax=L[i]*H[i]*W[i];
			   }
		}
		output("%d\n",wimax);
	}
	ret 0;
}

