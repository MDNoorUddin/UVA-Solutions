#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        double p=a+b+c;
        double s=p/2.00;
        if(p==0)
            printf("The radius of the round table is: 0.000\n");
        else{
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        double r=area/s;
        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
