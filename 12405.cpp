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

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459

map<char,char> mp;

int main(int argc, char** argv) {

     // freopen("c.txt","w",stdout);
	  int t;
	  cin>>t;
	  int I=1;
      int crow=0;
	  while(t--)
	  {
        int n;
	  	cin>>n;
	  	char a[200];
        for (int i = 0; i < n; ++i)
              cin >> a[i];
        for (int k = 1; k <= n;){
			if (a[k - 1] == '.'){
				
				crow++;
				k = k + 3;
			}
			else{
				k++;
			}

			

}
		cout << "Case "
             << I++
             << ": "
             << crow  
<< endl;
		crow=0;
	  }
}
