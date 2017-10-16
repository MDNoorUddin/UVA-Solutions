#include<bits/stdc++.h>
using namespace std;
void square();
int A[1000001];
int main()
{
    square();
    int a,b;
    while(scanf("%d%d",&a,&b)==2&&a)
    {
        int count=0;
        for(int i=a;i<=b;i++){
            //if(A[i]==1)
            count+=A[i];
        }
        printf("%d\n",count);
    }
    return 0;
}
void square()
{
    memset(A,0,sizeof(A));
    for(int i=1;i<=316;i++)
    {
        //A[i]=1;
        A[i*i]=1;
    }
}
