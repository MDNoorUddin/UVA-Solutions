#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int I=1;
    while(getline(cin,str))
    {
        if(str=="*")break;
        if(str=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n",I++);
        else
            printf("Case %d: Hajj-e-Asghar\n",I++);
    }
}
