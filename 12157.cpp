#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int mile=0,juice=0;
        int temp=0,copy;
        for(int i=0;i<n;i++)
        {
            temp=0;
            if(a[i]<30)
            {
              mile+=1;
            }
            else{
            copy=a[i];
            copy-=29;
            temp++;
            temp+=(copy/30);
            if(copy%30!=0)
            temp++;
            mile+=temp;
            }
            temp=0;
            if(a[i]<60)
            {
              juice+=1;
            }
            else{
            copy=a[i];
            copy=copy-59;
            temp++;
            temp+=(copy/60);
            if(copy%60!=0)
            temp++;
            juice+=temp;
            }
        }
        if(mile*10<juice*15)
        {
            printf("Case %d: Mile %d\n",I++,mile*10);
        }
        else if(mile*10>juice*15)
        {
            printf("Case %d: Juice %d\n",I++,juice*15);
        }
        else
        {
            printf("Case %d: Mile Juice %d\n",I++,mile*10,juice*15);
        }
    }
    return 0;
}
