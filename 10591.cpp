#include<bits/stdc++.h>
using namespace std;
int one(int a)
{
    int sum=0;
    while(true)
    {
        if(a<10){
                sum+=pow(a%10,2);
                break;
        }
        sum+=pow(a%10,2);
        a=a/10;

    }
    if(sum<10)return sum;
    return one(sum);
}
int main()
{
    //freopen("c.txt","w",stdout);
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        int x;
        cin>>x;
        int X=one(x);
        if(X==1)printf("Case #%d: %d is a Happy number.\n",I++,x);
        else printf("Case #%d: %d is an Unhappy number.\n",I++,x);
    }
    return 0;

}
