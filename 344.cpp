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
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define e 2.718281828459
vector<string> ones(10);
vector<string> tens(10);
void sieve()
{
	ones[0] = "";
    ones[1] = "i";
    ones[2] = "ii";
    ones[3] = "iii";
    ones[4] = "iv";
    ones[5] = "v";
    ones[6] = "vi";
    ones[7] = "vii";
    ones[8] = "viii";
    ones[9] = "ix";
   
    tens[0] = "";
    tens[1] = "x";
    tens[2] = "xx";
    tens[3] = "xxx"; 
    tens[4] = "xl";
    tens[5] = "l";
    tens[6] = "lx";
    tens[7] = "lxx";
    tens[8] = "lxxx";
    tens[9] = "xc";

}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	while(cin>>n&&n)
	{
		int o=0,f=0,t=0,fif=0,c=0;
		for(int N=1;N<=n;N++){
		int a=N/10;
		int b=N%10;
		for(int i=0;i<ones[b].length();i++)
		{
			if(ones[b][i]=='i')o++;
			if(ones[b][i]=='v')f++;
			if(ones[b][i]=='x')t++;
			if(ones[b][i]=='l')fif++;
			if(ones[b][i]=='c')c++;
		}
		for(int i=0;i<tens[a].length();i++)
		{
			if(tens[a][i]=='i')o++;
			if(tens[a][i]=='v')f++;
			if(tens[a][i]=='x')t++;
			if(tens[a][i]=='l')fif++;
			if(tens[a][i]=='c')c++;
		}
	}   //printf("99:  140  i,  50  v,  150  x,  50  l,  10  c")
		//printf("%d:  %d  i,  %d  v,  %d  x,  %d  l,  %d  c\n",n,o,f,t,fif,c);
		printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,o,f,t,fif,c);
	}
	return 0;
}          
