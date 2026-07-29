#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        int total_cost=x;
        int total_coins=0;
        int counter=0;
        if(y>=z)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            while(total_coins<total_cost)
            {
                total_cost+=y;
                total_coins+=z;
                counter++;
            }
            cout<<counter<<endl;
        }
    }
    return 0;
}