#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        cin.ignore();
        string x;
        int a[26];char b[27];
        for(int i=0;i<25;i++)
            a[i]=0;
            for(int i=0;i<25;i++){
                b[i]=i+65;
            }
            b[25]=90;
        while(t--)
        {
            getline(cin,x);
             for(int i=0;i<x.size();i++)
            {
                if((x[i]>=65&&x[i]<=90)||(x[i]>=97&&x[i]<=122))
                {

                     if(x[i]>=97&&x[i]<=122)
                       x[i]=x[i]-32;
                     a[x[i]-65]+=1;
                 }
            }
        }
        for(int i=0;i<25;i++)
        {
            int ptr=0;
            while(ptr<25-i-1)
            {
                if(a[ptr]<a[ptr+1]){
                    swap(a[ptr],a[ptr+1]);
                    swap(b[ptr],b[ptr+1]);
                }
                if(a[ptr]==a[ptr+1])
                {
                    if(b[ptr]>b[ptr+1])
                        swap(b[ptr],b[ptr+1]);
                }
                ptr++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]==0)
                break;
                cout<<b[i]<<" "<<a[i]<<endl;
        }
    return 0;
}
