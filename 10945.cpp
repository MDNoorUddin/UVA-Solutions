#include<bits/stdc++.h>
using namespace std;
int main()
{
    string bear;
    string talk;
    while(getline(cin,talk))
    {
        if(talk=="DONE")break;
        for(int i=0;i<talk.length();i++){
        if(talk[i]>=65&&talk[i]<=90)
            bear=bear+talk[i];
        if(talk[i]>=97&&talk[i]<=122){
            char d=talk[i]-32;
            bear=bear+d;
        }
        }
        string flip;
        for(int j=bear.length()-1;j>=0;j--)
            flip=flip+bear[j];
        if(bear==flip)
            printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
        bear.clear();
    }
    return 0;
}
