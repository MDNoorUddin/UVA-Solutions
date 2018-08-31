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
#include <utility>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;

int main(int argc, char** argv){

		int t;
		cin>>t;
		int c=0;
		while(t--)
		{
			if(c!=0)cout<<endl;
			c++;
			int n,k;
			cin>>n>>k;
			string a;
			for(int i=0;i<n-k;i++)a=a+'0';
			for(int i=n-k;i<n;i++)a=a+'1';
		    do{
				   cout<<a<<endl;
		    }while(next_permutation(a.begin(),a.end()));
		}
}
