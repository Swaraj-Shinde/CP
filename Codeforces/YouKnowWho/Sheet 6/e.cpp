#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,sum=0;
    cin>>n;
    int i=1;
    while(sum<=n)
    {
        sum+=i;
        i++;
    }
    cout<<i-2;
    return 0;
}