#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    cout<<"Lumberjacks:\n";
    int t;
    cin>>t;
    vector<int> l(10);
    while(t--)
    {
        for(int i=0;i<10;i++)
            cin>>l[i];
        int i=2;
        if(l[0]>l[1])
        {
            for(;i<10;i++)
            {
                if(l[i-1]<l[i])
                    break;
            }
            if(i==10)
                printf("Ordered\n");
            else printf("Unordered\n");
        }
        else
        {
            for(;i<10;i++)
            {
                if(l[i-1]>l[i])
                    break;
            }
            if(i==10)
                printf("Ordered\n");
            else printf("Unordered\n");
        }
    }
    return 0;
}
