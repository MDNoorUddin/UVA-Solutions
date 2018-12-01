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
#define g 9.81

int main(int argc, char** argv) {
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        string ans;
        for(int i=0;i<a.length();i++)
        {
            for(int j=0;j<b.length();j++)
            {
                if(a[i]==b[j])
                {
                    ans=ans+a[i];
                    b[j]='-';
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
