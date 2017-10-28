#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    cin.ignore();
    map<string,string> mp;
    string a,b;
    while(t--)
    {
        getline(cin,a);
        getline(cin,b);
        mp[a]=b;
    }
    cin>>n;
    cin.ignore();
    while(n--)
    {
        getline(cin,a);
        cout<<mp[a]<<endl;
    }
    return 0;
}
