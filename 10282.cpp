#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map<string,string> mp;
    string temp;
    string a,b;
    while(getline(cin,str)&&str!="")
    {
        stringstream f(str);
        f>>a>>b;
        mp[b]=a;
    }
    while(cin>>str)
    {
        if(mp.find(str)==mp.end())
            printf("eh\n");
        else
            printf("%s\n",mp[str].c_str());
    }
    return 0;
}
