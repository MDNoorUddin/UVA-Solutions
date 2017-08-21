#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("x.txt","r",stdin);
    char c;
    string temp;
    bool be=false;
    vector<int> x;
    x.clear();
    //bool B=false;
    //char BE;
    //bool num=false;
    while(cin.get(c))
    {
        //temp=temp+c;
        if(c=='\n')
        {
            //if(!x.empty())
                cout<<endl;
            x.clear();

        }
        if(c>=48&&c<=57)
        {
            //string d;
            x.push_back(c-48);

        }
        else{
            if(c=='!'){
                    cout<<endl;
            }
            else if(c=='b'){
                    long long sum=0;
                    for(int i=0;i<x.size();i++)
                    sum+=x[i];
                for(int j=0;j<sum;j++)
                    cout<<" ";
                    x.clear();
            }
            else{
                    long long sum=0;
                    for(int i=0;i<x.size();i++)
                         sum+=x[i];
                for(int j=0;j<sum;j++)
                    cout<<c;
                    x.clear();
            }
        }

    }

    return 0;
}


