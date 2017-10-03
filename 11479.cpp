#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589793
int main()
{
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
      vector<long long> a(3);
      cin>>a[0]>>a[1]>>a[2];
      if(a[0]<0||a[1]<0||a[2]<0)
        printf("Case %d: Invalid\n",I++);
        else
        {
            sort(a.begin(),a.end());
            if(a[0]+a[1]>a[2])
            {
                if(a[0]==a[1]&&a[0]==a[2])
                    printf("Case %d: Equilateral\n",I++);
                else if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2])
                    printf("Case %d: Scalene\n",I++);
                else printf("Case %d: Isosceles\n",I++);
            }
            else
                printf("Case %d: Invalid\n",I++);
        }
    }
    return 0;
}
