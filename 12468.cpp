#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,r;
    while(scanf("%d%d",&p,&r)==2)
    {
        if(p==-1)break;
        int diff=abs(p-r);
        if(diff>50)
            diff=100-diff;
        printf("%d\n",diff);
    }
}
