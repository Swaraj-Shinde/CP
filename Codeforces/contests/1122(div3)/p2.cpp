#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<c<<endl;
        }
        else if(a<b)
        {
            cout<<max(abs(a-b),abs(a+c-b))<<endl;
        }
        else
        {
            cout<<a+c-b<<endl;
        }
    }
    return 0;
}