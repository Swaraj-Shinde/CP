#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int i;
    cin>>n;
    int arr[n];
    long long target;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    for(i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}