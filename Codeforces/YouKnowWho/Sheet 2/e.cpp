#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long num=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>num)
        {
            num=arr[i];
        }
    }
    cout<<num;
    return 0;
}