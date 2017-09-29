#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j=1;
    for(;j<=t;j++)
    {
        int n,N;
        cin>>n;
        N=n;
        int a[n],b[n],C[n+2];
        int A,B;
        int I=0;
        while(n--)
        {
            cin>>A>>B;
            a[I]=A;
            b[I]=B;
            I++;
        }
        int rem = 0;
        int k=0;
        for( int i=N-1,j=N-1;i >=0||j>=0;i--,j--,k++)
        {
                 if( i>=0 && j>=0 )
                  {
                      int c = a[i]+b[j] + rem;

                    if(c < 10)
                       {
                           rem = 0;
                            C[k] = c;
                     }
                    else
                     {
                         c = c-10;
                        rem = 1;
                        C[k] = c;
                      }
                  }
           }
           if(rem == 1)
           C[k++] = rem;
            for(int i=k-1;i>=0;i--)
                cout<<C[i];
            cout<<endl;
            if(j!=t)
            cout<<endl;
    }
    return 0;
}
