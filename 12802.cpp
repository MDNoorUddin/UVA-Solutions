#include<stdio.h>
#include<iostream>
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
bool is_prime(int a)
{
	if(a<=3)return true;
	if(a%2==0)return false;
	for(int i=3;i<=sqrt(a);i++)
	{
		if(a%i==0)return false;
	}
	return true;
	
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
    int a;
    bool j=false;
    while(cin>>a)
    {
    	if(!j)
    	cout<<a*2<<endl;
    	int y=0;
    	int h=a;
    	while(h>0)
    	{
    		y=y*10;
    		y+=h%10;
    		h/=10;
		}
		if(y==a&&is_prime(a))j=true;
	}
	return 0;
}
