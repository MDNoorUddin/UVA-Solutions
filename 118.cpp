#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int I=0,J=0;
    int position;
    string str;
    vector<vector<int> > x(n+1);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            x[i].push_back(0);
        }
    }
    while(cin>>I>>J>>str){

        if(str[0]=='N')
        {
            //I=i;J=j;
            position = 1;
               // break;
        }
        if(str[0]=='S')
        {
            //I=i;J=j;
            position = 3;
                //break;
        }
        if(str[0]=='E')
        {
            //I=i;J=j;
            position = 2;
                //break;
        }
        if(str[0]=='W')
        {
            //I=i;J=j;
            position = 4;
                //break;
        }
    //cout<<str<<" I="<<I<<" J="<<J<<" Position="<<position<<endl;
    //cout<<"------------------------------------------------\n";
    string command;
    cin>>command;

    int index = 0;
    bool lost=false;

    //x[3][3]=1;

    for(;index<command.length();index++)
    {
      //  cout<<" I="<<I<<" J="<<J<<" Position="<<position<<endl;
        //cout<<"command "<<command[index]<<endl;
        if(command[index]=='F')
        {
          //  cout<<x[I][J]<<"\n";
            if(position==3)
            {
                if(J-1>=0)
                {
                    J--;
                }
                else
                {
            //        cout<<position<<endl;
              //      cout<<I<<" "<<J<<endl;
                    if(x[I][J]==0){
                //    cout<<"lost----1-------\n";
                    x[I][J]=1;
                    lost=true;
                    break;
                    }
                }
            }
            else if(position==1)
            {
                if(J+1<=m)
                {
                    //if(x[I][J+1]==0)
                    J++;
                }
                else
                {
                  //  cout<<position<<endl;
                    //cout<<I<<" "<<J<<endl;
                    if(x[I][J]==0){
                    x[I][J]=1;
                    lost=true;
                    //cout<<"lost----2-------\n";
                    break;
                    }
                }
            }
            else if(position==2)
            {
                if(I+1<=n)
                {
                    //if(x[I+1][J]==0)
                    I++;
                }
                else
                {
                    //cout<<position<<endl;
                    //cout<<I<<" "<<J<<endl;
                    if(x[I][J]==0){
                      //      cout<<"lost--------3---\n";
                    x[I][J]=1;
                    lost=true;
                    break;
                    }
                }
            }
            else if(position==4)
            {
                if(I-1>=0)
                {
                    //if(x[I-1][J]==0)
                    I--;
                }
                else
                {
                    //cout<<position<<endl;
                    //cout<<I<<" "<<J<<endl;
                    if(x[I][J]==0){
                    //cout<<"lost-------4----\n";
                    x[I][J]=1;
                    lost=true;
                    break;
                    }
                }
            }
        }
        else if(command[index]=='R')
        {
            if(position==1)position=2;
            else if(position==2)position=3;
            else if(position==3)position=4;
            else if(position==4)position=1;
        }

        else if(command[index]=='L')
        {
            if(position==1)position=4;
            else if(position==4)position=3;
            else if(position==3)position=2;
            else if(position==2)position=1;
        }

    }

    cout<<I<<" "<<J<<" ";
    if(position==1)cout<<"N";
    else if(position==2)cout<<"E";
    else if(position==3)cout<<"S";
    else if(position==4)cout<<"W";
    if(lost)cout<<" LOST";
    cout<<endl;

   }
   return 0;
}
