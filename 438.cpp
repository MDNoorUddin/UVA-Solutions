#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589793
int main()
{
    double x1,x2,x3,y1,y2,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        double a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        double b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        double c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        double s=(a+b+c)/2.00;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        double circle=a*b*c/(4*area);
        circle=2*circle*pi;
        printf("%.2lf\n",circle);
    }
    return 0;
}
