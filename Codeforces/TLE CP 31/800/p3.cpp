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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0,flag=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                count++;
            }
            else
            {
                sum+=count;
                count=0;
            }
            if(count==3)
            {
                flag=1;
                cout<<"2"<<"\n";
                break;
            }
        }
        sum+=count;
        if(flag!=1)
        {
            cout<<sum<<"\n";
        }
    }
    return 0;
}