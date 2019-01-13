#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,r,c,k,x;
    while(cin>>n>>r>>c>>k&&n)
    {
        int a[r+2][c+2];
        int b[r+2][c+2];
        for(int i=0;i<r+2;i++)
        {
            for(int j=0;j<c+2;j++)
            {
                a[i][j]=10000;
                b[i][j]=10000;
            }
        }
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                cin>>a[i][j];
                b[i][j]=a[i][j];
            }
        }

        for(int ii=1;ii<=k;ii++)
        {


            for(int i=1;i<=r;i++)
            {
              for(int j=1;j<=c;j++)
              {
                if(a[i][j]!=b[i][j])
                    a[i][j]=b[i][j];
              }
            }

        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(a[i][j]==n-1)
                {
                    if(a[i][j+1]==0)
                  {
                    b[i][j+1]=a[i][j];
                  }
                  if(a[i][j-1]==0)
                  {
                    //a[i][j-1]=0;//continue;
                    b[i][j-1]=a[i][j];
                  }
                  if(a[i+1][j]==0)
                  {
                    //a[i+1][j]=a[i][j];//continue;
                    b[i+1][j]=a[i][j];
                  }
                  if(a[i-1][j]==0)
                  {
                    //a[i-1][j]=a[i][j];//continue;
                    b[i-1][j]=a[i][j];
                  }
                }
                else
                {
                    if(a[i][j+1]==a[i][j]+1)
                   {
                    //a[i][j+1]=a[i][j];
                    b[i][j+1]=a[i][j];
                    //continue;
                   }
                  if(a[i][j-1]==a[i][j]+1)
                  {
                    //a[i][j-1]=a[i][j];//continue;
                    b[i][j-1]=a[i][j];
                  }
                  if(a[i+1][j]==a[i][j]+1)
                  {
                    //a[i+1][j]=a[i][j];//continue;
                    b[i+1][j]=a[i][j];
                  }
                  if(a[i-1][j]==a[i][j]+1)
                  {
                    //a[i-1][j]=a[i][j];//continue;
                    b[i-1][j]=a[i][j];

                  }
                }
            }
        }
      }

      for(int i=1;i<=r;i++)
            {
              for(int j=1;j<=c;j++)
              {
                if(a[i][j]!=b[i][j])
                    a[i][j]=b[i][j];
              }
            }

      for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(j!=1)cout<<" ";
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
