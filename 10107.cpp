#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x;
    int a;
    while(cin>>a)
    {
        x.push_back(a);
        if(x.size()==1){
            cout<<a<<endl;
            continue;
        }
        sort(x.begin(),x.end());
        if(x.size()%2!=0)
            cout<<x[x.size()/2]<<endl;
        else
        {
            int temp=(x[x.size()/2-1]+x[x.size()/2])/2;
            cout<<temp<<endl;
        }
    }
    return 0;
}
