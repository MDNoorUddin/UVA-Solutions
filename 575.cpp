#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="0")break;
        long long skewBinary=0;
        int k=str.length();
        int term;
        for(int i=0;i<str.length();i++)
        {
            term=str[i]-48;
            term=term*(pow(2,k)-1);
            skewBinary+=term;
            k--;
        }
        cout<<skewBinary<<endl;
    }
}
