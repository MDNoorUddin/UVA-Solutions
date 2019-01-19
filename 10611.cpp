#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    while(m--)
    {
        cin>>x;
        int low=1;
        int high=n,mid;
        int index=-1;
        while(low<high)
        {
            mid=(low+high)/2;
            index=mid;
            //cout<<"mid "<<mid<<" "<<a[mid]<<endl;
            if(a[mid]<x)
            {
                low=mid+1;
            }
            else if(a[mid]>x)
            {
                high=mid;
            }
            else
            {
                break;
            }

        }
        //cout<<a[index]<<" "<<index<<endl;
        if(a[index]==x)
        {
            int i=index,j=index;
            bool f1=false,f2=false;
            while(true)
            {
                if(a[i]<x)
                {
                    f1=true;
                    break;
                }
                if(i-1<1)break;
                i--;

            }

            while(true)
            {
                if(a[j]>x)
                {
                    f2=true;
                    break;
                }
                if(j+1>n)break;
                j++;
            }
            if(f1)cout<<a[i]<<" ";
            else cout<<"X ";
            if(f2)cout<<a[j]<<endl;
            else cout<<"X\n";
        }
        else if(a[index]<x)
        {
            int i=index,j=index;
            bool f1=true,f2=false;
            while(true)
            {
                if(a[i]>=x)
                {
                    i--;
                    break;
                }
                if(i+1>n)
                {
                    break;
                }
                i++;
            }
            //cout<<i<<" "<<f1<<endl;
            while(true)
            {
                if(a[j]>x)
                {
                    f2=true;
                    break;
                }
                if(j+1>n)break;
                j++;

            }
            //cout<<j<<" "<<f2<<endl;
            if(f1)cout<<a[i]<<" ";
            else cout<<"X ";
            if(f2)cout<<a[j]<<endl;
            else cout<<"X\n";
        }
        else
        {
            int i=index,j=index;
            bool f1=false,f2=true;
            while(true)
            {
                if(a[i]<x)
                {
                    f1=true;
                    break;
                }
                if(i-1<1)break;
                i--;

            }
            //cout<<i<<" "<<f1<<endl;
            while(true)
            {
                if(a[j]>x)
                {
                    f2=true;
                    break;
                }
                if(j+1>n)break;
                j--;

            }
            //cout<<j<<" "<<f2<<endl;
            if(f1)cout<<a[i]<<" ";
            else cout<<"X ";
            if(f2)cout<<a[j]<<endl;
            else cout<<"X\n";
        }
    }
}
