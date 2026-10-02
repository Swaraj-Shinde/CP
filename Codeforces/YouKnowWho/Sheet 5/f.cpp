#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    if(n%2==0)
    {
        long long sum = 0;
        int p = 2;
        while(p!=n+2)
        {
            sum += pow(x,p);
            p+=2;
        }
        cout<<sum;
    }
    else
    {
        long long sum =0;
        int p=2;
        while(p!=n+1)
        {
            sum+=pow(x,p);
            p+=2;
        }
        cout<<sum;
    }
    return 0;
}