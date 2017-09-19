#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<double>x;
        double a;
        double total=0.0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            x.push_back(a);
            total+=a;
        }
        double Count=0;
        total=(total/n)*1.00;
        for(int i=0;i<n;i++)
        {
            if(x[i]>total)Count++;
        }
        double above=(Count*100)/n*1.00;
        printf("%.3f",above);
        cout<<"%\n";

    }
    return 0;
}
