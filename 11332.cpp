#include<bits/stdc++.h>
using namespace std;
int one(int a)
{
    if(a<10) return a;
    int sum=0;
    while(true)
    {
        if(a<10){ sum+=a;break;}
        sum+=a%10;
        a=a/10;
    }
    one(sum);
}
int main()
{
    int a;
    while(cin>>a&&a)
    {
        cout<<one(a)<<endl;
    }
}

