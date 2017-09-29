#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {

        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=0)
                b[i-1]=abs(a[i]-a[i-1]);
        }
        if(n==1){ cout<<"Jolly\n"; continue;}
        sort(b,b+n-1);
        bool c=false;
        for(int i=0;i<n-1;i++)
        {
            if(b[i]==i+1)
            {
                c=true;
            }
                else {
                    c=false;
                    break;
                };
        }
        if(c) cout<<"Jolly\n";
        else cout<<"Not jolly\n";
    }
    return 0;
}
