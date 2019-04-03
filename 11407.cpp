#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> coins(101);
    for(int i=0;i<=100;i++)
    {
        coins[i]=(i+1)*(i+1);
    }
    int t;
    int n=10000;
    vector<int> value(n+1);
    fill(value.begin(),value.end(),99999);
    value[0] = 0;value[1]=1;
    for (int x = 2; x <= n; x++) {
      for (auto c : coins) {
         if (x-c >= 0) {
            value[x] = min(value[x], value[x-c]+1);
         }
       }
     }
     cin>>t;
     while(t--)
     {
         cin>>n;
         cout<<value[n]<<endl;
     }
}
