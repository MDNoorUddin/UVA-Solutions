#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    int t;
    scanf("%d",&t);
    cin.ignore();
    int Case=1,num;
    string temp;
    int d;
    while(t--)
    {
        map<string,int> homework;
        int sub;
        scanf("%d",&sub);
        while(sub--){
           cin>>temp>>num;
           homework[temp]=num;
        }
        cin>>d;
        cin.ignore();
        cin>>temp;
        if(homework.find(temp)==homework.end())
        {
            printf("Case %d: Do your own homework!\n",Case++);
        }
        else{
            if(homework[temp]<=d)
                printf("Case %d: Yesss\n",Case++);
            else if(homework[temp]<=d+5)
                printf("Case %d: Late\n",Case++);
            else
                printf("Case %d: Do your own homework!\n",Case++);
        }
    }
}
