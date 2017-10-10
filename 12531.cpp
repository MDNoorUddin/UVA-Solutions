#include<bits/stdc++.h>
using namespace std;
int main()
{
    int angle;
    while(scanf("%d",&angle)==1)
    {
        if(angle%6==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
