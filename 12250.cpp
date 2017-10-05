#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int I=1;
    while(getline(cin,str))
    {
        if(str=="#")break;
        if(str=="HELLO")
            printf("Case %d: ENGLISH\n",I++);
        else if(str=="HOLA")
            printf("Case %d: SPANISH\n",I++);
        else if(str=="HALLO")
            printf("Case %d: GERMAN\n",I++);
        else if(str=="BONJOUR")
            printf("Case %d: FRENCH\n",I++);
        else if(str=="CIAO")
            printf("Case %d: ITALIAN\n",I++);
        else if(str=="ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n",I++);
        else printf("Case %d: UNKNOWN\n",I++);
    }
    return 0;
}
