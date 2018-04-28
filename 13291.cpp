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
#include<bitset>

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459



int main(int argc, char** argv) {
      int n;
      while((scanf("%d",&n))==1)
      {
      	vector<int> a(n+1);
      	vector<int> b(n+1);
      	ll white=0,pink=0,yellow=0;
      	for(int i=1;i<=n;i++){
      		scanf("%d",&a[i]);
      		if(i%3==0)pink+=a[i];
      		if(i%3==1)yellow+=a[i];
      		if(i%3==2)white+=a[i];
		  }
		  
		ll Y=0,W=0,P=0;  
      	for(int i=1;i<=n;i++){
      		scanf("%d",&b[i]);
      		if(i%3==2)   //white first
      		{
      			W += b[i]*white;
      			
      			Y += b[i]*yellow;
      			
      			P += b[i]*pink;
		    }
		    else if(i%3==1)
		    {
		    	Y += b[i]*white;
		    	
		    	P += b[i]*yellow;
		    	
		    	W += b[i]*pink;
			}
			else
			{
				P += b[i]*white;
				
				W += b[i]*yellow;
				
				Y += b[i]*pink;
			}
		  } 
		  
		  printf("%lld %lld %lld\n",Y,W,P);     	
	  }
      return 0;
}
