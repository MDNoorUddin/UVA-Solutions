#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x;
        scanf("%d%d",&n,&m);
        map<int,int> a;
        map<int,int>::iterator j;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            a[x]++;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&x);
            a[x]--;
        }
        int cut=0;
        for(j=a.begin();j!=a.end();j++)
        {
            //cout<<j->second<<endl;
            cut+=abs(j->second);
        }
        printf("%d\n",cut);
    }
    return 0;
}
