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
    vector<int> a(5);
    vector<int> b(5);
    while(cin>>a[0])
    {
    	for(int i=1;i<=4;i++)cin>>a[i];
    	for(int i=0;i<=4;i++)cin>>b[i];
    	bool k=false;
    	for(int i=0;i<5;i++)
    	{
    		if(a[i]==b[i]){
    			k=true;
    			break;
			}
		}
		if(k)cout<<"N\n";
		else cout<<"Y\n";
	}
	return 0;
}
