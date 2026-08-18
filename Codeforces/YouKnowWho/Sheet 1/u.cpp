#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    int i;
    cin>>n;
    i=n;
    if(n==i)
    {
        cout<<"int "<<i;
    }
    else
    {
        cout<<"float "<<i<<" "<<setprecision(3)<<n-i;
    }
    return 0;
}