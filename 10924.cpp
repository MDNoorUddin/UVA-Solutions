#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1)return true;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    string str;
    while(cin>>str)
    {
        int sum=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                sum+=str[i]-64+26;
            }
            else
            {
                sum+=str[i]-96;
            }
        }
        if(isPrime(sum))
            cout<<"It is a prime word.\n";
        else cout<<"It is not a prime word.\n";
    }
}
