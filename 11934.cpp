#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
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
#define PI 3.1415

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int a,b,c,d,l;
	while(cin>>a>>b>>c>>d>>l)
	{
		if(a==0&&b==0&&c==0&&d==0&&l==0)break;
		ll ans;
		int count=0;
		for(int i=0;i<=l;i++)
		{
			ans=(a*i*i)+(b*i)+c;
			if(ans%d==0)count++;
		}
		cout<<count<<endl;
	}
	return 0;
}                   
