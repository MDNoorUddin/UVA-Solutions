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
    vector<string> a;
    map<string,int> mp;
    set<string> st;
    while(cin>>str)
    {
        mp[str]=1;
        st.insert(str);
    }
    //cout<<"---------------------------"<<'\n';
    map<string,int>::iterator it;
    it=mp.begin();
    while(it!=mp.end())
    {
        //cout<<"---------"<<it->first<<endl;
        int f=0;
        int s=1;
        while(s<it->first.length())
        {
            string t1,t2;
            for(int ii=0;ii<s;ii++)
            {
                t1=t1+it->first[ii];
            }
            for(int iii=s;iii<it->first.length();iii++)
            {
                t2=t2+it->first[iii];
            }
            //cout<<t1<<" "<<t2<<'\n';
            if(mp[t1]&&mp[t2])
            {
                auto pos = st.find(t1+t2);
                if(pos!=st.end())
                cout<<it->first<<endl;
                break;
            }
            f++;
            s++;
        }
        it++;
    }
    return 0;
}
