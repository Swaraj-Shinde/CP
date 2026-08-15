#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int num = x/1000;
    if(num%2==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
    return 0;
}