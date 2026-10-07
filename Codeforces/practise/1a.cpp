#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,b;
    cin>>n>>m>>b;
    long long row,column;
    if(n%b==0)
    {
        row=n/b;
    }
    else
    {
        row=(n/b)+1;
    }
    if(m%b==0)
    {
        column=m/b;
    }
    else
    {
        column = (m/b)+1;
    }
    cout<<row*column;
    return 0;
}