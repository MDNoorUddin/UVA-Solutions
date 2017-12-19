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
map<int,ll> mp;
map<int,ll>::iterator it;
void sieve();
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int m,n;
	while(cin>>m>>n)
	cout<<(m-1)*n+(n-1)<<endl;
	ret 0;
}
