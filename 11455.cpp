#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int t;
    cin>>t;
    int a[4];
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3])
            printf("square\n");
        else if((a[0]==a[2]&&a[1]==a[3])||(a[0]==a[1]&&a[2]==a[3])||(a[0]==a[3]&&a[1]==a[2]))
            printf("rectangle\n");
        else{
                sort(a,a+4);
                if(a[3]>=a[1]+a[0]+a[2])
                    printf("banana\n");
            else printf("quadrangle\n");
        }
    }
}
