#include<bits/stdc++.h>
using namespace std;
long long fact(int n);
int main()
{
    int n;
    while(cin>>n)
    {
        if(n<=0)
        {
            if(n==0)cout<<"Underflow!\n";
            else if(n%2==0)cout<<"Underflow!\n";
            else cout<<"Overflow!\n";
        }
        else
        {
            if(n>=1&&n<=7)cout<<"Underflow!\n";
            else if(n>13)cout<<"Overflow!\n";
            else{
            long long h=fact(n);
            cout<<h<<endl;
            }

        }

    }

    return 0;
}
long long fact(int n)
{
    if(n==0)return 1;
    return n*fact(n-1);
}
