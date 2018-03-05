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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	ll n;
	while(cin>>n){
	ll first=((n-1)*(n-1))/4;
	//cout<<first<<" ";
	first*=2;
	first++;
	ll last=first+((n-1)*2);
	//cout<<last<<" ";
	ll sum=last+(last-2)+(last-4);
	cout<<sum<<endl;
    }
}
