#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int hour,min;
        scanf("%d:%d",&hour,&min);
        int m,h;
        if(hour==1)
        {
            m=11;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==2)
        {
            m=10;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==3)
        {
            m=9;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==4)
        {
            m=8;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==5)
        {
            m=7;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==6)
        {
            m=6;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==7)
        {
            m=5;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==8)
        {
            m=4;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==9)
        {
            m=3;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==10)
        {
            m=2;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        else if(hour==11)
        {
            m=1;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
            if(m==0)
                m=12;
        }
        else if(hour==12)
        {
            m=12;
            if(min>0)
            {
                h=60-min;
                m--;
            }
            else
                h=min;
        }
        if(m<10)
            printf("0");
        printf("%d:",m);
        if(h<10)
            printf("0");
        printf("%d\n",h);
    }
}
