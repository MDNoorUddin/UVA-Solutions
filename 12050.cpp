	#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
map<string,int> month;
map<string,int> week;
map<string,int>::iterator it;
ll m(ll n)
{			
	if(n<109){
		n-=9;
		//n*=10;
		return n;
	}else if(n<1099)
	{
		n-=99;
		//n*=100;
		return n;
	}else if(n<10999)
	{
		n-=999;
		//n*=1000;
		return n;
	}
	else if(n<109999){
		n-=9999;
		return n;
	}
	else if(n<1099999){
		n-=99999;
		return n;
	}
	else if(n<10999999){
		n-=999999;
		return n;
	}
	else if(n<109999999){
		n-=9999999;
		return n;
	}
	else if(n<1099999999){
		n-=99999999;
		return n;
	}
	else
	{
		n-=999999999;
		return n;
	}
}
void palindrome(ll n,bool f)
{
	n=m(n);
	printf("%lld",n);
	if(f==false)
	n/=10;
	while(n>0)
	{
		//cout<<"in\n";
		printf("%d",n%10);
		n/=10;
	}
	cout<<endl;
	return;
}
bool even_odd(ll n)
{
	if(n<=9)return false;
	else if(n<19)return true;
	else if(n<109)return false;
	else if(n<199)return true;
	else if(n<1099)return false;
	else if(n<1999)return true;
	else if(n<10999)return false;
	else if(n<19999)return true;
	else if(n<109999)return false;
	else if(n<199999)return true;
	else if(n<1099999)return false;
	else if(n<1999999)return true;
	else if(n<10999999)return false;
	else if(n<19999999)return true;
	else if(n<109999999)return false;
	else if(n<199999999)return true;
	else if(n<1099999999)return false;
	else if(n<1999999999)return true;
	else return false;
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	ll n;
	while(cin>>n&&n)
	{
		bool sample=even_odd(n);
		if(n<=9)
		{
			cout<<n<<endl;
			
		}
		else
		{
			palindrome(n,sample);
		}
	}
	ret 0;
}
