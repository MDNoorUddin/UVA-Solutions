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
#include<string.h>

using namespace std;

#define ll long long
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define E 2.718281828459
#define ii pair<int, int>

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	scanf("%d",&t);
	int N,M,up,sum,temp;
	while(t--)
	{
		scanf("%d%d",&N,&M);
		up=((N+1)*(N+2))/2;
		temp=(M*(M+1))/2;
		temp+=(N*M);
		cout<<up+temp<<endl;
	}
	return 0;
}         
