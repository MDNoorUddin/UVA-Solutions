#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
    int t;
    cin>>t;
    long long a,b,p,q;
    while(t--)
    {
        cin>>a>>b;
        q = a % b;
        p = b - q;
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}
