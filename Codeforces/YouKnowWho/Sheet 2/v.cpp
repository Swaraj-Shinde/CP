#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int print = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(print%4==0)
            {
                cout<<"PUM"<<endl;
                print++;
            }
            else
            {
                cout<<print<<" ";
                print++;
            }
        }
    }
    return 0;
}