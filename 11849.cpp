#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int jack,jill;
    int n;
    int total_disk;
    while(scanf("%d%d",&jack,&jill)==2)
    {
        if(jack==0)break;
        total_disk=jack+jill;
        set<int> disk;
        for(int i=0;i<total_disk;i++)
        {
            scanf("%d",&n);
            disk.insert(n);
        }
        printf("%d\n",total_disk-disk.size());
    }
    return 0;
}
