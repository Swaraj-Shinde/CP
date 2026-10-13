#include <bits/stdc++.h>
using namespace std;

double average(double arr[],int n)
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum/n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    double arr[n];
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<fixed<<setprecision(7)<<average(arr,n);
    return 0;
}