#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        long long num;
        cin>>num;
        if(num<0)
        {
            arr[i]=2;
        }
        else if(num>0)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}