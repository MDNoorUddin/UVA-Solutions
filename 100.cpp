#include<bits/stdc++.h>
using namespace std;
int Count;
void length(int n)
{
    Count++;
    if(n==1)return;
    if(n%2==0)
        length(n/2);
    if(n%2!=0)
    length(3*n+1);
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int A,B;
        A=a;B=b;
        if(A>B)swap(A,B);
        long long Max=0;
        for(int i=A;i<=B;i++)
        {
            length(i);
            if(Count>Max)Max=Count;
            Count=0;
        }
        cout<<a<<" "<<b<<" "<<Max<<endl;
    }
}
