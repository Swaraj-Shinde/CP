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
    int flag = 0;
    int counter = 0;
    while(flag!=1)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                flag=1;
                break;
            }
            else
            {
                arr[i] = arr[i]/2;
            }
        }
        if(flag==1)
        {
            break;
        }
        else
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}