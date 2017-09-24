#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("c.txt","w",stdout);
    int a;
    int high=11,low=0;
    bool v=true;
    while(cin>>a&&a)
    {
        cin.ignore();
        string str;
        getline(cin,str);
        if(str=="too high")
        {
            if(a<low){v=false;continue;}
            if(a<high)
            high=a;
        }
        if(str=="too low")
        {
            if(a>high){v=false;continue;}
            if(a>low)
            low=a;
        }
        if(str=="right on")
        {
            if(a<high&&a>low&&v)printf("Stan may be honest\n");
            else cout<<"Stan is dishonest\n";
            high=11;
            low=0;
            v=true;
        }

    }
}
