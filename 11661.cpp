#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

#define long long ll

int main()
{
	int n;
	string str;
	while((scanf("%d",&n))==1&&n){
	    cin>>str;
	    bool z=false;
	    bool r=false;
	    bool d=false;
	    int r_position,d_position;
	    int mn=2000000;
	    int temp=0;
	    for(int i=0;i<str.length();i++)
	    {
	    	if(str[i]=='Z')
	    	{
	    		z=true;
	    		break;
			}
			if(str[i]=='R')
			{
				r=true;
				r_position=i+1;
				if(d)
				{
					if(abs(r_position-d_position)<mn)
					{
						mn=abs(r_position-d_position);
					}
					d=false;
				}
			}
			if(str[i]=='D')
			{
				d=true;
				d_position=i+1;
				if(r)
				{
					if(abs(r_position-d_position)<mn)
					{
						mn=abs(r_position-d_position);
					}
					r=false;
				}
			}
		}
		if(z)printf("0\n");
		else printf("%d\n",mn);
 }
	
}
