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
		vector<int> a(27);
		fill(a.begin(),a.end(),0);
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			a[str[i]-65+1]++;
		}
		int count=0;
		while(a['M'-64]>0&&a['A'-64]>2&&a['R'-64]>1&&a['I'-64]>0&&a['T'-64]>0&&a['G'-64]>0)
		{
			count++;
			a['M'-64]--;a['A'-64]-=3;a['R'-64]-=2;a['I'-64]--;a['T'-64]--;a['G'-64]--;
		}
		printf("%d\n",count);
	}	    
	return 0;
}
