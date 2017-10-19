#include<bits/stdc++.h>
using namespace std;
bool compare(char a, char b){
  char lower_a = tolower(a), lower_b = tolower(b);
  if( lower_a == lower_b ){
    return a < b;
  }
  else return lower_a < lower_b;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        cin>>str;
        set<string> a;
        sort(str.begin(),str.end(),compare);
        do{
            cout<<str<<endl;
        }while(next_permutation(str.begin(),str.end(),compare));
    }
}
