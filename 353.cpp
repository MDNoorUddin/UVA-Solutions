#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    while(cin>>p)
    {
        set<char> s;
        for(int i=0;i<p.length();i++)
            s.insert(p[i]);
        int n=p.length();
        set<string> l;
        for(int i=0;i<n-1;i++)
        {
            string temp;
            temp=temp+p[i];
            for(int j=i+1;j<n;j++)
            {
                temp=temp+p[j];
                if(temp==string(temp.rbegin(),temp.rend())){
                    l.insert(temp);
                }
            }
        }
        cout<<"The string '"<<p<<"' contains "<<l.size()+s.size()<<" palindromes.\n";
    }
    return 0;
}
