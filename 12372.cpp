#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    int l,h,w;
    int I=1;
    while(testCase--)
    {
        cin>>l>>h>>w;
        if(l<=20&&h<=20&&w<=20)
            printf("Case %d: good\n",I++);
        else printf("Case %d: bad\n",I++);
    }
}
