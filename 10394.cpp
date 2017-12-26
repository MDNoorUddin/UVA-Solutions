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

void sieve();
vector<bool> a(20000000);
vector<int> b;
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	while(cin>>n)
	{
		printf("(%d, %d)\n",b[n],b[n]+2);
	}
	ret 0;
}

void sieve()
{
	fill(a.begin(),a.end(),true);
	 for (int p=2; p*p<=a.size(); p++)
     {
        if (a[p] == true)
        {
            for (int i=p*2; i<=a.size(); i += p)
                a[i] = false;
        }
     }
            b.push_back(0);
			for(int i=3;i<=a.size()-2;i+=2)
			{
				if(a[i]&&a[i+2])
				{
					b.push_back(i);
				}
			}   
}
