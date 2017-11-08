#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll limit;
ll count;
void sequence(ll a)
{
	if(a==1){
		::count++;
		return;
	}
	if(a>limit)
	return;
	::count++;
	if(a%2==0)
	sequence(a/2);
	else
	sequence(3*a+1);
}
int main(){
	int Case=1;
	ll a;
	while(cin>>a>>limit)
	{
		if(a==-1&&limit==-1)
		break;
		sequence(a);
		printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",Case++
		,a,limit,::count);
		::count=0;
	}
	return 0;
}
