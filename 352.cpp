#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int I=1;
    while(cin>>n)
    {
        vector<string> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='1')
                {
                    count++;
                    queue<pair<int,int> > x;
                    x.push(make_pair(i,j));
                    while(!x.empty())
                    {
                        int I = x.front().first;
                        int J = x.front().second;
                        a[I][J]='0';
                        x.pop();
                        if(J+1<n&&a[I][J+1]=='1')
                        {
                            x.push(make_pair(I,J+1));
                        }
                        if(J-1>=0&&a[I][J-1]=='1')
                        {
                            x.push(make_pair(I,J-1));
                        }
                        if(I+1<n&&a[I+1][J]=='1')
                        {
                            x.push(make_pair(I+1,J));
                        }
                        if(I-1>=0&&a[I-1][J]=='1')
                        {
                            x.push(make_pair(I-1,J));
                        }

                        if(I+1<n&&J+1<n&&a[I+1][J+1]=='1')
                        {
                            x.push(make_pair(I+1,J+1));
                        }
                        if(I+1<n&&J-1>=0&&a[I+1][J-1]=='1')
                        {
                            x.push(make_pair(I+1,J-1));
                        }

                        if(I-1>=0&&J+1<n&&a[I-1][J+1]=='1')
                        {
                            x.push(make_pair(I-1,J+1));
                        }
                        if(I-1>=0&&J-1>=0&&a[I-1][J-1]=='1')
                        {
                            x.push(make_pair(I-1,J-1));
                        }


                    }
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",I++,count);
    }
    return 0;
}
