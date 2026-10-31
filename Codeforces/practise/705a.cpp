#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    string hate="I hate it";
    string love="I love it";
    string hate1="I hate ";
    string love1="I love ";
    if(n==1)
    {
        cout<<hate;
    }
    else
    {
        for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<love1<<"that ";
        }
        else
        {
            cout<<hate1<<"that ";
        }
    }
    if(n%2==0)
    {
        cout<<love;
    }
    else
    {
        cout<<hate;
    }
    } 
    return 0;
}