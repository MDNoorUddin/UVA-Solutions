#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    while(cin>>n&&n)
    {
        priority_queue<int> a;
        while(n--)
        {
            cin>>x;
            a.push(x*-1);
        }
        long long sum=0;
        while(true)
        {
            if(a.size()==1)break;
            int x=abs(a.top());
            a.pop();
            x=x+abs(a.top());
            a.pop();
            a.push(-x);
            sum+=x;
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
