#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long a[n];
    long min_elem = LONG_MAX;
    long max_elem = LONG_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        min_elem=min(min_elem,a[i]);
        max_elem=max(max_elem,a[i]);
    }
    cout<<min_elem<<" "<<max_elem;
    return 0;
}