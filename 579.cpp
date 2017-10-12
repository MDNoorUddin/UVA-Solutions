#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0&&m==0)break;
        if(h==12)h=0;
        h=abs(((h*30)+m/2)-(m*6));
        if(h>180)
            h=360-h;
        printf("%.3lf\n",h);
    }
    return 0;
}
