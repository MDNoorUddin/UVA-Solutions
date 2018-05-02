#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("c.txt","w",stdout);
    int t,n,I=1;
    //string str;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	char str[n+1];
    	for(int i=0;i<n;i++)cin>>str[i];
    	int ban=0;
    	int draw=0;
    	int www=0;
    	int abn=0;
    	for(int i=0;i<n;i++)
    	{
    		if(str[i]=='B')ban++;
    		else if(str[i]=='W')www++;
    		else if(str[i]=='T')draw++;
    		else abn++;
		}
		if(ban==0&&www==0)
		{
			if(draw==0)
			{
				printf("Case %d: ABANDONED\n",I++);
			}
			else
			{
				printf("Case %d: DRAW 0 %d\n",I++,draw);
			}
			continue;
		}
		if(ban>0&&www==0&&draw==0)
		{
			printf("Case %d: BANGLAWASH\n",I++);continue;
		}
		else if(www>0&&ban==0&&draw==0)
		{
			printf("Case %d: WHITEWASH\n",I++);continue;
		}
		else if(ban==www)
		{
			printf("Case %d: DRAW %d %d\n",I++,ban,draw);continue;
		}
		else if(ban>www)
		{
			printf("Case %d: BANGLADESH %d - %d\n",I++,ban,www);continue;
		}
		else if(www>ban)
		{
			printf("Case %d: WWW %d - %d\n",I++,www,ban);continue;
		}
	}
}
