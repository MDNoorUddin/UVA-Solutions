#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int t;
    cin>>t;
    cin.ignore();
    string str;
    int I=1;
    while(t--)
    {
        cin>>str;
        printf("Case %d: ",I++);
        for(int i=0;i<str.length();)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                int l=0;
                int j;
                string temp;
                for(j=i+1;j<str.length();j++)
                {
                    if(str[j]>=65&&str[j]<=90)
                        break;
                    temp=temp+str[j];
                    l++;
                }
                stringstream geek(temp);
                int f=0;
                geek>>f;
                for(int k=0;k<f;k++)cout<<str[i];
                i=i+l;
            }
            i++;
        }
        cout<<endl;

    }
}
