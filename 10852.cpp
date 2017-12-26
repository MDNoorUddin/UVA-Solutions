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

vector<bool> a(10001);

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n=n/2;
		n++;
		int ans;
		while(true)
		{
			if(a[n])
			{
				ans=n;
				break;
			}
			n++;
		}
		printf("%d\n",ans);
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
            // Update all multiples of p
            for (int i=p*2; i<=a.size(); i += p)
                a[i] = false;
        }
     }
}
