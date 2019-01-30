#include<bits/stdc++.h>
using namespace std;
const int N=3e7+1;
int T[N]={};
int main()
{

    int q,z,I=1;
    for(int g=1;g<N;g++)
    {
        for(int x=1;g*x + g <N;x++)
        {
            if(((g*x+g)^(g*x))==g)
            {
                T[g*x + g]++;
            }
        }
    }
    for(int i=2;i<N;i++)
    {
        T[i]+=T[i-1];
    }
    //cout<<T[7]<<'\n';
    cin>>q;
    while(q--)
    {
        cin>>z;
        cout<<"Case "<<I++<<": "<<T[z]<<endl;
    }
    return 0;
}
