#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<iterator>
#include<algorithm>
#include<string>
using namespace std;

typedef long long ll;

#define MAX 999999999999
#define MIN -99999999999
int ct=0;
void _9s(int x)
{
    //cout<<x<<endl;
    if(x<10)
    {
        if(x==9)ct++;
        return;

    }
    int n=0;
    while(x>0)
    {
        n+=(x%10);
        x/=10;
    }
    if(n%9==0)
    {
        ct++;
        _9s(n);
    }
    else
    {
        return;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    double r1,r2,r3;
    while(t--)
    {
        cin>>r1>>r2>>r3;
        double x=r1*r1*acos(1-((2*r2*r3)/((r1+r2)*(r1+r3))));
        double y=r2*r2*acos(1-((2*r1*r3)/((r1+r2)*(r2+r3))));
        double z=r3*r3*acos(1-((2*r1*r2)/((r1+r3)*(r2+r3))));

        x=(x+y+z)/2.00;

        r1=sqrt(r1*r2*r3*(r1+r2+r3));
        printf("%.6lf\n",r1-x);
    }
}
