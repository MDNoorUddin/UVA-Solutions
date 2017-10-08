#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
     return (b == 0 ? a : GCD(b, a % b));
}
int main()
{
    int number;
    while(cin>>number&&number)
    {
        int G=0;
        for(int i=1;i<number;i++)
        {
            for(int j=i+1;j<=number;j++)
                G+=GCD(i,j);
        }
        printf("%d\n",G);
    }
    return 0;
}
