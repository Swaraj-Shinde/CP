#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    while(n>0 && m>0)
    {
        if(n>=m)
        {
            int sum = 0;
            for(int i=m;i<=n;i++)
            {
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }
        else
        {
            int sum = 0;
            for(int i=n;i<=m;i++)
            {
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }
        cin>>n>>m;
    }
    return 0;
}