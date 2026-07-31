#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    string symbol[2];
    cin>>a>>symbol[0]>>b>>symbol[1]>>c;
    if(symbol[0]=="+")
    {
        if(a+b==c)
        {
            cout<<"Yes";
        }
        else{
            cout<<a+b;
        }
    }
    else if(symbol[0]=="-")
    {
        if(a-b==c)
        {
            cout<<"Yes";
        }
        else{
            cout<<a-b;
        }
    }
    else{
        if(a*b==c)
        {
            cout<<"Yes";
        }
        else{
            cout<<a*b;
        }
    }
    return 0;
}