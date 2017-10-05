#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  total;
    int I=1;
    while(cin>>total&&total)
    {
        int given=0;
        int due=0;
        int current;
        while(total--)
        {
            cin>>current;
            if(current==0)given++;
            else due++;
        }
        printf("Case %d: %d\n",I++,due-given);
    }
    return 0;
}
