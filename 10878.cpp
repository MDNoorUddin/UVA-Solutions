#include<bits/stdc++.h>
using namespace std;
int toDecimal(string bin);
int main()
{
    string str;
    bool first=false;
    string tape;
    while(getline(cin,str))
    {
        string temp;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='o'){
                temp=temp+'1';
            }
            if(str[i]==' '){
                temp=temp+'0';
            }
        }
        if(!temp.empty()){
        char ascii=toDecimal(temp);
        cout<<ascii;
        }
    }
    return 0;
}
int toDecimal(string bin)
{
    int len=bin.length()-1;
    int decimal=0;
    for(int i=0;i<bin.length();i++)
    {
        char base=bin[i];
        if(base!='0'){
        int d=base-48;
        decimal+=pow(2,len);
        }
        len--;
    }
    return decimal;
}
