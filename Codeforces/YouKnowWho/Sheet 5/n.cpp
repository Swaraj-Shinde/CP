#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<" ";
            counter++;
        }
    }
    for(int i=0;i<n-counter;i++)
    {
        cout<<0<<" ";
    }
    return 0;
}