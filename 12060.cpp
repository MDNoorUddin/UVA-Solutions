#include<bitset>
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
#include<queue>
#include<stack>
#include<deque>
#include<stdio.h>
#include<bitset>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define INF 9999999
#define CS(I) printf("Case %d:\n",I++)
#define pc(I) printf("Case %d: ",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");

int Case=1;

int main()
{
    //freopen("c.txt","w",stdout);
    int n,x;
    while(cin>>n&&n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin >> x;
            sum+=x;
        }
        if(sum%n==0)
        {
            //cout<<"sum "<<sum<<endl;
            CS(Case);
            if(sum>=0)
            printf("%d\n",sum/n);
            else
            printf("- %d\n",abs(sum)/n);
        }
        else
        {
            //cout<<"sum "<<sum<<endl;
            int div=sum/n;
            int d_div=0;
            int dd=div;
            while(dd)
            {
                d_div++;
                dd/=10;
            }
            //cout<<"gfbfgbf "<<d_div<<" "<<div<<endl;
            int temp=abs(sum%n);
            int GCD=__gcd(n,temp);
            CS(Case);
            int digit;

            if(n/GCD<10)digit=1;
            else if(n/GCD<100)digit=2;
            else digit=3;
            if(div==0)
            {
                if(sum>=0){
                    if(digit==1)
                    {
                        printf("%d\n-\n%d\n",temp/GCD,n/GCD);
                    }
                    else if(digit==2)
                    {
                        printf("%2d\n--\n%d\n",temp/GCD,n/GCD);
                    }
                    else
                    {
                        printf("%3d\n---\n%d\n",temp/GCD,n/GCD);
                    }
                }
                else
                {
                    //else printf("  %d\n- -\n  %d\n",temp/GCD,n/GCD);
                    if(digit==1)
                    {
                        printf("  %d\n- -\n  %d\n",temp/GCD,n/GCD);
                    }
                    else if(digit==2)
                    {
                        printf("  %2d\n- --\n  %d\n",temp/GCD,n/GCD);
                    }
                    else
                    {
                        printf("  %3d\n- ---\n  %d\n",temp/GCD,n/GCD);
                    }
                }
            }
            else if(sum<0)
            {
                    for(int i=1;i<=d_div+2;i++)cout<<" ";

                    if(digit==1)
                    {
                        printf("%d\n- %d-\n",temp/GCD,abs(div));
                        for(int i=1;i<=d_div+2;i++)cout<<" ";
                        printf("%d\n",n/GCD);
                    }
                    else if(digit==2)
                    {
                        printf("%2d\n- %d--\n",temp/GCD,abs(div));
                        for(int i=1;i<=d_div+2;i++)cout<<" ";
                        printf("%d\n",n/GCD);
                    }
                    else
                    {
                        printf("%3d\n- %d---\n",temp/GCD,abs(div));
                        for(int i=1;i<=d_div+2;i++)cout<<" ";
                        printf("%d\n",n/GCD);
                    }
                //cout<<"negative sum\n";
            }
            else
            {
                for(int i=1;i<=d_div;i++)cout<<" ";
                    if(digit==1)
                    {
                        printf("%d\n%d-\n",temp/GCD,abs(div));
                        for(int i=1;i<=d_div;i++)cout<<" ";
                        printf("%d\n",n/GCD);
                    }
                    else if(digit==2)
                    {
                        printf("%2d\n%d--\n",temp/GCD,abs(div));
                        for(int i=1;i<=d_div;i++)cout<<" ";
                        printf("%d\n",n/GCD);
                    }
                    else
                    {
                        printf("%3d\n%d---\n",temp/GCD,abs(div));
                        for(int i=1;i<=d_div;i++)cout<<" ";
                        printf("%d\n",n/GCD);
                    }
                //cout<<"positive sum\n";
            }
        }
    }
    return 0;
}
