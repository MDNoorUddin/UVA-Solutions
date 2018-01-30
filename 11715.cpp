#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double x,y,z;
	int i=1;
	while(cin>>n&&n)
	{
		cin>>x>>y>>z;
		if(n==1)
		{
			double s = (x+y) * z / 2;
            double a = (y-x) / z;
            printf("Case %d: %.3f %.3f\n",i++,s,a);
		}
		else if(n==2)
		{
			double t = (y-x) / z;
            double s = (x+y) * t / 2;
            printf("Case %d: %.3f %.3f\n",i++,s,t);
		}
		else if(n==3)
		{
			double t = (-x + sqrt(x*x + 2*y*z)) / y;
            double v = y*t + x;
            printf("Case %d: %.3f %.3f\n",i++,v,t);
		}
		else
		{
			double t = (-x + sqrt(x*x + -2*y*z)) / -y;
            double u = x - y*t;
            printf("Case %d: %.3f %.3f\n",i++,u,t);
		}
	}
    return 0;
}
