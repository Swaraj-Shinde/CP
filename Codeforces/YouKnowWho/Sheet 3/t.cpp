#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int prim_diag=0;
    int sec_diag=0;
    for(int i=0;i<n;i++)
    {
        prim_diag+=arr[i][i];
        sec_diag+=arr[n-1-i][i];
    }
    cout<<abs(prim_diag-sec_diag);
    return 0;
}