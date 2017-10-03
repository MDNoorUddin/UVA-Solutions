#include<bits/stdc++.h>
using namespace std;
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
        vector<int> a(x);
        for(int i=0;i<x;i++)
            cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        printf("Case %d: %d\n",I++,a[0]);
    }
}
