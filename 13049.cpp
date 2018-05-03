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
    int t,I=1;
    cin>>t;
    while(t--)
    {
        int n;
        string a,b;
        cin>>n>>a>>b;
        int count=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]>b[i])
            {
                int A=a[i]-48;
                int B=b[i]-48;
                if(A-B<=5){
                    count+=(A-B);//cout<<"adding "<<A-B<<" "<<i<<endl;
                }
                else {
                    count+=(10-(A-B));//cout<<"adding "<<A-B<<" "<<i<<endl;
                }
            }
            else
            {
                int A=a[i]-48;
                int B=b[i]-48;
                if(B-A<=5){count+=(B-A);//cout<<"adding "<<B-A<<" "<<i<<endl;
                }
                else {count+=(10-(B-A));//cout<<"adding "<<B-A<<" "<<i<<endl;
                }
            }
        }
        printf("Case %d: %d\n",I++,count);
    }
}
