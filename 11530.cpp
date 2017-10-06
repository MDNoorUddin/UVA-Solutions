#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    int I=1;
    while(t--)
    {
        string str;
        getline(cin,str);
        int press=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')press++;
            else
            {
                char num=str[i];
                int n=num-97+1;
                //cout<<n<<endl;
                if(n<=18)
                {
                    if(n%3==0)press+=3;
                    else press=press+(n%3);
                    //cout<<"adding "<<n%3<<endl;
                }
                else
                {
                    if(n==19||n==26)press+=4;
                    else if(n==22||n==25)press+=3;
                    else if(n==21||n==24)press+=2;
                    else press++;
                }
            }

        }
        printf("Case #%d: %d\n",I++,press);
    }
    return 0;
}
