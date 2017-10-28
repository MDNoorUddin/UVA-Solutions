#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<int,int> uva;
    map<int,int>::iterator j;
    vector<int> a;
    vector<int>::iterator i;
    while(cin>>n)
    {
        uva[n]++;
        i=find(a.begin(),a.end(),n);
        if(i==a.end())
            a.push_back(n);
    }
    i=a.begin();
    while(i!=a.end())
    {
        printf("%d %d\n",*i,uva[*i]);
        i++;
    }
    return 0;
}
