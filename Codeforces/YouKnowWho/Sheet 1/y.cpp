#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,product;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    product=a*b*c*d;
    int last2 = product%100;
    if(last2<10)
    {
        cout<<"0"<<last2;
    }
    else
    {
    cout<<last2;
    }
    return 0;
}