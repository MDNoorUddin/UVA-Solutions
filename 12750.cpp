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
    int n,I=1;
    while(t--)
    {
    	cin>>n;
    	char c;
    	bool no=false;
    	int count=0;
    	int day=0;
    	while(n--)
    	{
    		cin>>c;
    		if(no)continue;
    		day++;
    		if(c=='L'||c=='D')count++;
    		else
    		{
    			count=0;
			}
    		if(count==3)
    		{
    			no=true;
			}
		}
		if(no)printf("Case %d: %d\n",I++,day);
		else printf("Case %d: Yay! Mighty Rafa persists!\n",I++);
	}
	return 0;
}
