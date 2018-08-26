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
vector<int> pr;

void sieve(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
        	pr.push_back(p);
        	//cout<<"--------"<<p<<endl;
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    //cout<<pr.size()<<endl;
    //for(int i=0;i<pr.size();i++)cout<<pr[i]<<endl;
}

int main(int argc, char** argv){
	string str;
	sieve(100000);
	//cout<<"hello world\n";
	while(cin>>str)
	{
		if(str=="0")break;
		size_t x;
		for(int i=pr.size()-1;i>=0;i--)
		{
			stringstream f;
			f<<pr[i];
			string s=f.str();
			x = str.find(s);
			if(x!=std::string::npos)
			{
				cout<<s<<endl;break;
			}
		}
	}
	return 0;
}
