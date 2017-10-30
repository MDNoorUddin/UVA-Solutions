#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int m,n;
    scanf("%d%d",&m,&n);
    map<string,double> mp;
    string str;
    double a;
    while(m--)
    {
        cin>>str>>a;
        mp[str]=a;
    }
    int count=0;
    double sum=0;
    while(cin>>str)
    {
        if(str==".")
        {
            cout<<sum<<endl;
            sum=0;
            count++;
            if(count==n)break;
        }
        else
        {
            map<string,double>::iterator i;
            i=mp.find(str);
            if(i!=mp.end())
            {
                //cout<<i->first<<endl;
                sum+=i->second;
            }
        }
    }
    return 0;
}
