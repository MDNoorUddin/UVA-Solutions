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
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        vector<int> a(26);
        fill(a.begin(),a.end(),0);
        char small='z';
        for(int i=0;i<str.length();i++)
        {
            if(str[i]<small)small = str[i];
            a[str[i]-97]++;
        }
        for(int i=small+1;i<=122;i++)
        {
            if(a[i-97]>1){
                a[small-97]+=(a[i-97]-1);
                a[i-97]=1;
            }
        }

        for(int i=small-97;i<26;i++)
        {
            for(int j=1;j<=a[i];j++)printf("%c",97+i);
        }
        cout<<endl;
    }
}
