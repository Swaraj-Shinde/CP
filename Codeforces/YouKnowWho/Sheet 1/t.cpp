#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>=b && b>=c)
    {
        cout<<c<<endl;
        cout<<b<<endl;
        cout<<a<<endl;
        cout<<endl;
    }
    else if(a>=c && c>=b)
    {
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<a<<endl;
        cout<<endl;
    }
    else if(b>=a && a>=c)
    {
        cout<<c<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<endl;
    }
    else if(b>=c && c>=a)
    {
        cout<<a<<endl;
        cout<<c<<endl;
        cout<<b<<endl;
        cout<<endl;
    }
    else if(c>=a && a>=b)
    {
        cout<<b<<endl;
        cout<<a<<endl;
        cout<<c<<endl;
        cout<<endl;
    }
    else
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<endl;
    }

        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    return 0;
}