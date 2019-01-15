#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> str(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>str[i];
    }
    int q,x;
    cin>>q;
    while(q--)
    {
        cin>>x;
        if(str[x]!="?")cout<<str[x]<<endl;
        else
        {
            int left=0,left_index=-1;
            int right=0,right_index=-1;
            for(int i=x-1;i>0;i--)
            {
                left++;
                if(str[i]!="?")
                {
                    left_index=i;
                    break;
                }
            }

            for(int i=x+1;i<=n;i++)
            {
                right++;
                if(str[i]!="?")
                {
                    right_index=i;
                    break;
                }
            }
            if(left_index==-1)
            {
                for(int i=1;i<=right;i++)
                {
                    cout<<"left of ";
                }
                cout<<str[right_index]<<endl;
                continue;
            }
            if(right_index==-1)
            {
                for(int i=1;i<=left;i++)
                {
                    cout<<"right of ";
                }
                cout<<str[left_index]<<endl;
                continue;
            }
            if(left==right)
            {
                cout<<"middle of "<<str[left_index]<<" and "<<str[right_index]<<endl;
                continue;
            }
            if(right<left)
            {
                for(int i=1;i<=right;i++)
                {
                    cout<<"left of ";
                }
                cout<<str[right_index]<<endl;
            }
            else if(left<right)
            {
                for(int i=1;i<=left;i++)
                {
                    cout<<"right of ";
                }
                cout<<str[left_index]<<endl;
            }
        }
    }
    return 0;
}
