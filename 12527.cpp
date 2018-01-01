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

vector<int> b(5001);

void  generate()
{
	fill(b.begin(),b.end(),0);
	for(int i=1;i<=5000;i++){
	map<int,int> c;
	bool re=false;
	int y=i;
	while(y>0)	
	{
		//cout<<y;
		c[y%10]++;
		if(c[y%10]>1)
		{
			re=true;
			break;
		}
		y/=10;
	}
	if(re)b[i]=0;
	else b[i]=1;
    }
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	generate();
	int N,M;
	while((scanf("%d%d",&N,&M)==2))
	{
		int sum=0;
		for(int i=N;i<=M;i++)
		sum+=b[i];
		printf("%d\n",sum);
	}
	return 0;
}
