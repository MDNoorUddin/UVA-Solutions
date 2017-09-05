#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        do{
            cout<<str<<endl;
        }while(next_permutation(str.begin(),str.end()));
        cout<<endl;
    }
    return 0;
}
