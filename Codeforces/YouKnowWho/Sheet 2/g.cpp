#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0 || n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
        long long ans = n;
        for(int i=n-1;i>0;i--)
        {
            ans = ans*i;
        }
        cout<<ans<<endl;
    }
}
    return 0;
}