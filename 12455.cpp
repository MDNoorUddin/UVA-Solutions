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
#include<bitset>
#include<string.h>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459
#define g 9.81

bool val=false;

vector<int> a(2000);

void add(int total,int l,int r,int sum)
{
    if(sum==total)
    {
        val=true;
        return;
    }
    if(l>r)
    {
        return;
    }
    add(total,l+1,r,sum+a[l]);
    add(total,l+1,r,sum);

}

int main(int argc, char** argv) {

    //freopen("c.txt","w",stdout);
    int t;

    cin>>t;

    while(t--){

         int total;

         cin>>total;

         int n;

         cin>>n;

         for(int i=1;i<=n;i++)

         {

             cin>>a[i];


         }

         add(total,1,n,0);

         if(val)

         {

             cout<<"YES\n";
             val=false;
         }

         else
         {
            cout<<"NO\n";
            val=false;
         }
         a.clear();
    }
	return 0;
}
