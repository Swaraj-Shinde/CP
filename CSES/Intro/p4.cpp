#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,counter=0;
    cin>>n;
    long long arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            counter+=arr[i-1]-arr[i];
            arr[i]+=arr[i-1]-arr[i];
        }
        else{
            continue;
        }
    }
    cout<<counter;
    return 0;
}