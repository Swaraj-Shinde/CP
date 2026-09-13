#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long arr[n];
    long long min_elem=100001;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        min_elem=min(arr[i],min_elem);
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==min_elem)
        {
            counter++;
        }
    }
    if(counter%2==0)
    {
        cout<<"Unlucky";
    }
    else
    {
        cout<<"Lucky";
    }
    
    return 0;
}