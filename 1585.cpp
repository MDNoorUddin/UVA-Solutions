#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("x.txt","w",stdout);
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        int prev=0;
        long long sum=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='O')
            {
                sum=sum+1+prev;
                prev++;
            }
            else{
                prev=0;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
