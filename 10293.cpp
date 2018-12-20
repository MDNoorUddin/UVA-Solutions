#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<set>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

int I=1;
typedef long long ll;

int main()
{
    //freopen("c.txt","w",stdout);
    string str;
    string easy;
    bool x=false;
    while(getline(cin,str)&&str[0]!='#')
    {
        if(x)
        cout<<'\n';
        x=true;
        easy=easy+str;
        while(getline(cin,str)&&str[0]!='#')
        {
             if(easy[easy.length()-1]!='-'&&easy[easy.length()-1]!='\'')
                easy=easy+" "+str;
                else
            easy=easy+str;
        }
        map<int,int> mp;
        map<int,int>::iterator it;
        string temp;
        for(int i=0;i<easy.length();i++)
        {
            if(islower(easy[i])||isupper(easy[i]))
            {
                temp=temp+easy[i];
            }
            else if(easy[i]=='-'||easy[i]=='\'')
            {
                continue;
            }
            else
            {
                if(!temp.empty())
                mp[temp.length()]++;
                temp.clear();
            }
        }
        it=mp.begin();
        while(it!=mp.end())
        {
            cout<<it->first<<" "<<it->second<<endl;
            it++;
        }
        //cout<<'\n';
        easy.clear();
    }
    return 0;
}
