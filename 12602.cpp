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
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--)
	{
		cin>>str;
		int n=0;
		for(int i=4;i<str.length();i++)
		{
			n=n*10;
			n=n+(str[i]-48);			
		}
		long long sum=0;
		int j=0;
		for(int i=2;i>=0;i--,j++)
		{
			sum+=(pow(26,j)*(str[i]-65));
		}
		if(abs(sum-n)<=100)cout<<"nice\n";
		else cout<<"not nice\n";
	}		    
	return 0;
}
