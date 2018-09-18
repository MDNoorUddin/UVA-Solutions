#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<iterator>
#include<algorithm>
#include<string>
using namespace std;

typedef long long ll;

#define MAX 999999999999
#define MIN -99999999999
int ct=0;
void _9s(int x)
{
    //cout<<x<<endl;
    if(x<10)
    {
        if(x==9)ct++;
        return;

    }
    int n=0;
    while(x>0)
    {
        n+=(x%10);
        x/=10;
    }
    if(n%9==0)
    {
        ct++;
        _9s(n);
    }
    else
    {
        return;
    }
}
int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="0")break;
        int c=0;
        for(int i=0;i<str.length();i++)
        {
            c+=(str[i]-48);
        }
        _9s(c);
        //cout<<"hello world\n";
        if(ct==0)
        {
            printf("%s is not a multiple of 9.\n",str.c_str());

        }
        else
        {
            printf("%s is a multiple of 9 and has 9-degree %d.\n",str.c_str(),ct);
        }
        ct=0;
    }
}
