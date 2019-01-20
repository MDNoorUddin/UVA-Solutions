#include<bits/stdc++.h>
using namespace std;
double p,q,r,s,t,u;
double bi(double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        if(bi(0)*bi(1)>0)
        {
            cout<<"No solution\n";
            continue;
        }
        double low=0,high=1,mid,result;
        for(int i=1;i<=100;i++)
        {
            mid=(low+high)/2;
            result=bi(mid);
            //cout<<mid<<" "<<result<<endl;
            if(bi(mid)<=0)
                high=mid;
            else
                low=mid;
        }
        cout<<setprecision(4)<<fixed <<mid<<endl;
    }
}
