#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;

int main(int argc, char** argv){
	    int t;
	    cin>>t;
	    int n;
	    while(t--)
	    {
	    	cin>>n;
	    	vector<int> a(n+1);
	    	int Y;
	    	for(int i=0;i<n;i++)cin>>a[i];
	    	int count=0;
	    	bool x=false;
	    	while(count<=1000)
	    	{
	    		count++;
	    		int Zero=a[0];
	    		for(int i=0;i<n;i++)
	    		{
	    			if(i+1==n)
	    			{
	    				a[i]=abs(a[i]-Zero);
	    			}
	    			else
	    			a[i]=abs(a[i]-a[i+1]);
	    		}
	    		int sum=0;
	    		for(int i=0;i<n;i++)
	    	    {
	 			 	sum+=a[i];
	     		}
	    		if(sum==0){
	    			x=true;
	    			break;
	    		}
	    	}
	    	if(!x)cout<<"LOOP\n";
	    	else cout<<"ZERO\n";
	    }
		return 0;
}
