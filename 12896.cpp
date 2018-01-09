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

char a[10][5];

void sieve()
{
	a[1][1]='.';
	a[1][2]=',';
	a[1][3]='?';
	a[1][4]='"';
	
	a[2][1]='a';
	a[2][2]='b';
	a[2][3]='c';
	
	a[3][1]='d';
	a[3][2]='e';
	a[3][3]='f';
	
	a[4][1]='g';
	a[4][2]='h';
	a[4][3]='i';
	
	a[5][1]='j';
	a[5][2]='k';
	a[5][3]='l';
	
	a[6][1]='m';
	a[6][2]='n';
	a[6][3]='o';
	
	a[7][1]='p';
	a[7][2]='q';
	a[7][3]='r';
	a[7][4]='s';
	
	a[8][1]='t';
	a[8][2]='u';
	a[8][3]='v';
	
	a[9][1]='w';
	a[9][2]='x';
	a[9][3]='y';
	a[9][4]='z';
	
	a[0][1]=' ';
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		vector<int> b(n);
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int temp;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			cout<<a[b[i]][temp];
		}
		cout<<endl;
	}
	return 0;
}                   
