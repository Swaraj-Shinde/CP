#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int n;
    cin>>ch>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=arr[i];j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}