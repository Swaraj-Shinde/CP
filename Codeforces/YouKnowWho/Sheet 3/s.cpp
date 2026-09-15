#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    long long x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(x==arr[i][j])
            {
                cout<<"will not take number";
                return 0;
            }
        }
    }
    cout<<"will take number";
    return 0;
}