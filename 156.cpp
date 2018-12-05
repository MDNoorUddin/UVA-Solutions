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
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,string> dup;
    unordered_map<string,int> count;
    string str;
    while(getline(cin,str))
    {
        if(str=="#")break;
        stringstream f(str);
        string temp;
        while(f>>temp)
        {
            //cout<<temp<<endl;
            string sortt;
            char c;
            for(int i=0;i<temp.length();i++)
            {
            	c=temp[i];
            	if(temp[i]>=65&&temp[i]<=90)c=tolower(c);
                sortt=sortt+c;
                //cout<<c;
            }
            //cout<<sortt<<endl;
            sort(sortt.begin(),sortt.end());
            dup[temp]=sortt;
            count[sortt]++;
        }
    }
    for(auto e:dup)
    {
    	if(count[e.second]==1)
    	{
    		cout<<e.first<<endl;
    	}
    }

    return 0;
}
