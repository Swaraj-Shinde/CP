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
        int n,k;
        cin>>n>>k;
        int flag=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];           
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}