#include<bits/stdc++.h>
using namespace std;
int main()
{
    int poly;
    while(cin>>poly)
    {
        long long ans,ans2;
        ans=poly;
        ans2=poly+1;
        ans=ans*poly;
        ans2=ans2*(poly+1);
        cout<<(ans*ans2)/4<<endl;
    }
}
