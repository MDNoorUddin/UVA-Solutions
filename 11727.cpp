#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        vector<int> x;
        int s;
        for(int i=0;i<3;i++)
        {
            cin>>s;
            x.push_back(s);
        }
        sort(x.begin(),x.end());
        printf("Case %d: %d\n",I++,x[1]);
    }
    return 0;
}
