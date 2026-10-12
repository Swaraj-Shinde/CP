#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min_vol = arr[0];
        for(int i=1;i<n;i++)
        {
            min_vol = max(min_vol,(arr[i]-arr[i-1]));
        }
        min_vol = max(min_vol,(2*(x-arr[n-1])));
        cout<<min_vol<<"\n";
    }
    return 0;
}