#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<n-1;i++)
        {
            long long max_elem=arr[i];
            for(int j=i+1;j<n;j++)
            {
                max_elem=max(arr[j],max_elem);
                cout<<max_elem<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}