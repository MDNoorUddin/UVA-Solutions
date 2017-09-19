#include<bits/stdc++.h>
using namespace std;
int one(int a)
{
    if(a<10) return a;
    int sum=0;
    while(true)
    {
        if(a<10){ sum+=a;break;}
        sum+=a%10;
        a=a/10;
    }
    one(sum);
}
int main()
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        int A=0,B=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]<=90&&a[i]>=65)a[i]=a[i]+32;
            if(a[i]<=122&&a[i]>=97){
                A+=a[i]-96;
            }
        }
        for(int i=0;i<b.length();i++)
        {
            if(b[i]<=90&&b[i]>=65)b[i]=b[i]+32;
            if(b[i]<=122&&b[i]>=97){
                B+=b[i]-96;
            }
        }
        A=one(A);
        B=one(B);
        if(B<A) swap(A,B);
        double x=(A*100.00)/B;
        printf("%.2f ",x);cout<<"%\n";
    }
    return 0;
}
