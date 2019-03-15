#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,sum;
    while(cin>>n>>k&&n)
    {
        sum=1;
        k=min(n-k,k);
        long long ans=1;
        for (int i = 1; i <=k; i++) {
			ans *= (n - i+1);
			ans /= ( i);
		}
        cout<<ans<<endl;
    }
}
