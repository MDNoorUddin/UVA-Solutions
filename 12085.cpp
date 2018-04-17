
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

int main(int argc, char** argv) {
        int n;
        int Case=1;
        while(cin>>n)
        {
            if(n==0)break;
            vector<ll> a(n+1);
            a[n]=-1;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            printf("Case %d:\n",Case++);
            for(int i=0;i<n;i++)
            {
                if(a[i+1]==a[i]+1)
                {
                    stringstream f;
                    f<<a[i];
                    string A;
                    f>>A;
                    int j=i+1;
                    while(j<n)
                    {
                        if(a[j+1]==a[j]+1)
                        {
                            j++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    stringstream ff;
                    ff<<a[j];
                    string B;
                    ff>>B;
                    printf("0%s-",A.c_str());
                    int index=-1;
                    for(int k=0;k<A.length();k++)
                    {
                        if(A[k]!=B[k])
                        {
                            index=k;
                            break;
                        }
                    }
                    for(int k=index;k<B.length();k++)
                    {
                        cout<<B[k];
                    }
                    cout<<endl;
                    i=j;
                }
                else
                {
                    printf("0%d\n",a[i]);
                }
            }
            cout<<endl;
        }

	return 0;
}
