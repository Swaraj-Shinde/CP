#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    long long min_elem=1000000;
    long long max_elem=-1000000;
    int min_index=-1;
    int max_index=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        min_elem=min(min_elem,arr[i]);
        if(min_elem==arr[i])
        {
            min_index=i;
        }
        max_elem=max(max_elem,arr[i]);
        if(max_elem==arr[i])
        {
            max_index=i;
        }
    }
    arr[min_index]=max_elem;
    arr[max_index]=min_elem;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}