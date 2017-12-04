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

using namespace std;

#define ll long long
#define sc scanf
#define print printf 
#define Loop while
#define echo cout
#define ret return
int main(int argc, char** argv) {
	int t;
	sc("%d",&t);
	int D,M,Y,QY;
	int i=1;
	Loop (t--){
	cin>>D>>M>>Y>>QY;
	if(D==29&&M==2)
	{
		int count=0;
		for(int j=Y+4;j<=QY;j++)
		{
			if (j %  400  ==  0)count++;
			else if(j  %  100  ==  0) continue;
			else if(j  %  4  ==  0) count++;
		}
		print ("Case %d: %d\n",i++,count);
	}
	else
	{
		print ("Case %d: %d\n",i++,QY-Y);
	}
    }
	ret 0;
}

