#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            if(num==k)
            {
                cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}