#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f&&h)
    {
        bool fail=false,success=false;
        double meter=0;
        double day=0;
        f=u*(f/100.00);
        while(true)
        {
                day++;
                meter+=u;
                if(meter>h)
                {
                    success=true;
                    break;
                }
                meter-=d;
            if(meter<0){
                fail=true;
                break;
            }
            u=u-f;
            if (u < 0)
				u = 0;
        }
        int g=day;
        if(fail)
            printf("failure on day %d\n",g);
        else
            printf("success on day %d\n",g);
    }
    return 0;
}
