#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    long long lowest=100001;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        lowest=min(lowest,arr[i]);
    }
    cout<<lowest<<" ";
    for(int i=0;i<n;i++)
    {
        if(arr[i]==lowest)
        {
            cout<<i+1;
            break;
        }
    }
    return 0;
}