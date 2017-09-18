#include<bits/stdc++.h>
using namespace std;
int NReverse(int m);
bool isPrime(int n)
{
    if(n==0||n==1)return false;
    else if(n==2)return true;
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)return false;
        }
    }
    return true;
}
int main()
{
    //freopen("c.txt","w",stdout);
    int i;
    int x;
    while(cin>>x){
    if(!isPrime(x))
        printf("%ld is not prime.\n",x);
    else
    {

        int X=NReverse(x);
        if(isPrime(X)&&x!=X)printf("%ld is emirp.\n",x);
        else printf("%ld is prime.\n",x);
    }
  }
  return 0;
}
int NReverse( int m){
    int r = 0;
    while(m > 0){
        r = (r*10) + (m%10);
        m /= 10;
    }
    return r;
}
