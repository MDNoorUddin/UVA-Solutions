#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int C=0;
    while(getline(cin,a))
    {
        if(C>0)
            cout<<endl;
        C++;
        int A[127];
        int B[127];
        for(int i=0;i<127;i++){
            A[i]=0;
            B[i]=i;
        }
        int Len=a.length();
        for(int i=0;i<Len;i++)
        {
            int c=(int)a[i];
            A[a[i]]+=1;
        }
        vector<int> x;
        vector<int> y;
        for(int i=0;i<127;i++)
        {
            if(A[i]!=0){
                x.push_back(A[i]);
                y.push_back(B[i]);
            }
        }
        for(int i=0;i<x.size();i++)
        {
            int ptr=0;
            while(ptr<x.size()-i-1)
            {
                if(x[ptr]>x[ptr+1])
                {
                    swap(x[ptr],x[ptr+1]);
                    swap(y[ptr],y[ptr+1]);
                }
                if(x[ptr]==x[ptr+1])
                {
                    if(y[ptr]<y[ptr+1])
                    {
                       swap(x[ptr],x[ptr+1]);
                       swap(y[ptr],y[ptr+1]);
                    }
                }
                ptr++;
            }
        }
        for(int i=0;i<x.size();i++)
        {
            cout<<y[i]<<" "<<x[i]<<endl;
        }
    }
    return 0;
}
