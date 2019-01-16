#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int teams,I=1;
    while(cin>>teams&&teams){
            cout<<"Scenario #"<<I++<<endl;
    map<int,int> team_number;
    map<int,int> already;
    int n,x;

    for(int i=1;i<=teams;i++)
    {
        cin>>n;
        while(n--)
        {
            cin>>x;
            team_number[x]=i;
        }
    }
    queue<int> fina;
    queue<int> members[teams+1];
    string str;
    while(cin>>str)
    {
        if(str=="STOP")break;
        if(str[0]=='D')
        {
            if(fina.empty())continue;
            int tp=fina.front();
            if(members[tp].size()==1)
            {
                cout<<members[tp].front()<<endl;
                members[tp].pop();
                already[tp]=0;
                fina.pop();
            }
            else
            {
                cout<<members[tp].front()<<endl;
                members[tp].pop();
            }
            continue;
        }
        cin>>n;
        if(already[team_number[n]])
        {
            members[team_number[n]].push(n);
        }
        else
        {
            already[team_number[n]]=1;
            fina.push(team_number[n]);
            members[team_number[n]].push(n);
        }
    }
    cout<<endl;
    }
}
