#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;

int main(int argc, char** argv){
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll sum=0;
		for(int i=1;i<=sqrt(n);i++)
		{
			if(n%i!=0)continue;
			else
			{
				if(i%k!=0){
				sum+=i;
				}
				//cout<<i<<" "<<n/i<<endl;
				if(i!=((n/i))&&(n/i)%k!=0)
				sum+=(n/i);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
