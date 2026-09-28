#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count = 0;
        for(int i = 0; i<=n-2; i++){
            if(arr[i+1] - arr[i] <= 1){
                count++;
                i++;
            }
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}