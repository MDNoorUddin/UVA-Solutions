#include<bits/stdc++.h>
using namespace std;
int main()
{
    int initial,first,second,last;
    while(cin>>initial>>first>>second>>last)
    {
        if(last==0&&first==0&&second==0&&initial==0)break;
        int angle=0;
        if(initial-first!=0)
        {
            if(first>initial)
            {
                angle+=(40+initial-first);
            }
            else
            {
                angle+=(initial-first);
            }
        }
        if(first-second!=0)
        {
            if(first<second)
            {
                angle+=(second-first);
            }
            else
            {
                angle+=(40+second-first);
            }
        }
        if(second-last!=0)
        {
            if(last>second)
            {
                angle+=(40+second-last);
            }
            else
            {
                angle+=(second-last);
            }
        }
        angle=angle*9;
        printf("%d\n",angle+1080);
    }
}
