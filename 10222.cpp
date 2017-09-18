#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
            //printf("%c %d\n",str[i],str[i]);
        if(str[i]>=65&&str[i]<=90)str[i]=str[i]+32;
    }
    string querty="qwertyuiop[]asdfghjkl;'zxcvbnm,.";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            for(int j=0;j<querty.length();j++)
            {
                if(str[i]==querty[j])
                {
                    str[i]=querty[j-2];
                    break;
                }
            }
        }
    }
    cout<<str<<endl;
}
