#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum = n*(n+1)/2;
    long long arr[n-1];
    long long add=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        add+=arr[i];
    }
    cout<<sum-add;
    return 0;
}