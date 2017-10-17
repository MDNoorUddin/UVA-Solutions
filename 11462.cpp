#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int f;
    while(scanf("%d",&n)==1&&n)
    {
        vector<int> a(n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a.begin(),a.end());
        f=a.size();
        for(int i=0;i<f-1;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[f-1]);
    }
    return 0;
}
