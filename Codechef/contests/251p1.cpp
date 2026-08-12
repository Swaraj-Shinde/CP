#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int q= x/m;
        int r = x%m;
        if(q==0 || m==x)
        {
            cout<<"1"<<endl;
        }
        else if(r==0)
        {
            cout<<min(q,n-q+1)<<endl;
        }
        else{
            cout<<min(q+1,n-(q+1)+1)<<endl;
        }
    }
    return 0;
}