#include<bits/stdc++.h>
#include<stdio.h>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getc(stdin);
    int i=1;
    while(t--){
        string str;
        getline(cin,str);
        stack<char> p;
        bool valid=true;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='('||str[i]=='[')
                p.push(str[i]);
            else
            {
                if(p.empty())
                {
                    valid=false;
                    break;
                }
                char u=p.top();
                if(u=='('||u=='['){
                    if(u=='['&&str[i]==']')
                    p.pop();
                    else if(u=='('&&str[i]==')')
                    p.pop();
                    else{
                        valid=false;
                        break;
                    }
                }
            }
        }
        if(p.empty()&&valid)cout<<"Yes\n";
        else cout<<"No\n";
        //cout<<p.size()<<endl;
    }
    return 0;
}

