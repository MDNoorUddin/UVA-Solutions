#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,I=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,mx=0;
        while(n--)
        {
            cin>>x;
            if(x>mx)
                mx=x;
        }
        cout<<"Case "<<I++<<": "<<mx<<endl;
    }
    return 0;
}
