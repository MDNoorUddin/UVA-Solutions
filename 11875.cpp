#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int I=1;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        vector<int> a(n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a.begin(),a.end());
        printf("Case %d: %d\n",I++,a[a.size()/2]);
    }
}
