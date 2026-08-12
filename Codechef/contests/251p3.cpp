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
        int r3=n%3;
        int r5=n%5;
        int op=0;
        if(n%3==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if((n+(5-r5))%3==0 || (n+1)%3==0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}