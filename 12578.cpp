#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        double a;
        cin>>a;
        double r=a/5;
        r=r*r;
        r=r*acos(-1);
        double b=(a*60)/100;
        a=a*b;
        printf("%.2f %.2f\n",r,a-r);
    }
}
