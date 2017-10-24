#include<bits/stdc++.h>
using namespace std;
#define ll long long
string str;
ll toBinary(ll n)
{
    ll parity=0;
    int temp;
    char t;
    while(n>0)
    {
        temp=(n%2);
        parity+=temp;
        t=(temp+'0');
        str=str+t;
        n/=2;
    }
    return parity;
}
int main()
{
    //freopen("uva.txt","w",stdout);
    ll n,p=1;
    while(cin>>n&&n)
    {
        p=toBinary(n);
        reverse(str.begin(),str.end());
        cout<<"The parity of "<<str<<" is "<<p<<" (mod 2).\n";
        str.clear();
    }
    return 0;
}
