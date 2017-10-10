#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[]={"Happy","birthday","to","you",
    "Happy","birthday","to","you",
    "Happy","birthday","to","Rujia",
    "Happy","birthday","to","you"};
    int people;
    cin>>people;
    cin.ignore();
    string p[people];
    for(int i=0;i<people;i++)
        cin>>p[i];
    int i=0,j=0;
    int sang=0;
    int count=0;
    int ptr=0;
    if(people<=16)
    {
        while(ptr<16)
        {
            if(i==people)
                i=0;
            cout<<p[i++]<<": "<<str[j++]<<endl;
            ptr++;
        }
    }
    else
    {
        int re=people%16;
        int P=people-re+16;
        while(ptr<P)
        {
            if(j==16)
                j=0;
            if(i==people)
                i=0;
            cout<<p[i++]<<": "<<str[j++]<<endl;
            ptr++;
        }
    }
    return 0;
}
