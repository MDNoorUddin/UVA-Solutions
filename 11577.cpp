#include<bits/stdc++.h>
using namespace std;
int main(){
    //.freopen("uva.txt","uva",stdout);
    int t;
    scanf("%d",&t);
    cin.ignore();
    string str;
    while(t--)
    {
        vector<pair<int,char> > a(26);
        for(int i=0;i<26;i++)
        {
            a[i].first=0;
            a[i].second=i+97;
        }
        getline(cin,str);
        char c;
        for(int i=0;i<str.length();i++)
        {
            if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
            {
                str[i]=tolower(str[i]);
                a[str[i]-97].first++;
            }
        }
        sort(a.begin(),a.end());
        int max=a[a.size()-1].first;
        string temp;
        for(int i=25;i>=0;i--)
        {
            if(a[i].first<max)
                break;
            temp=temp+a[i].second;
        }
        sort(temp.begin(),temp.end());
        printf("%s\n",temp.c_str());
    }
    return 0;
}
