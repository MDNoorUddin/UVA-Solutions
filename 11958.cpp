#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	int t;
	int bus,c_hour,c_min;
	int min_t,need,tih,tim;
	int Time;
	int I=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d:%d",&bus,&c_hour,&c_min);
		min_t=9999;
		while(bus--)
		{
			scanf("%d:%d%d",&tih,&tim,&need);
			if(tih==c_hour&&tim<c_min)
			{
				Time=(24-c_hour)*60+(tih*60)+tim+need-c_min;
			}
			else if(tih<c_hour)
			{
				Time=(24-c_hour)*60+(tih*60)+tim+need-c_min;
			}
			else
			{
				Time=(tih-c_hour)*60+tim+need-c_min;
			}
			//cout<<Time<<endl;
			min_t=min(min_t,Time);
		}
		printf("Case %d: %d\n",I++,min_t);
	}
	return 0;
}
