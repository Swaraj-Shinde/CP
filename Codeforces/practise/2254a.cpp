#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int rounds=0;
        while(a!=b && b!=c && c!=a)
        {
            if(a>b && a>c && b>c)
            {
                a-=1;
                c+=1;
                rounds++;
            }
            else if(a>b && a>c && c>b)
            {
                a-=1;
                b+=1;
                rounds++;
            }
            else if(b>a && a>c && b>c)
            {
                b-=1;
                c+=1;
                rounds++;
            }
            else if(b>a && b>c && c>a)
            {
                b-=1;
                a+=1;
                rounds++;
            }
            else if(c>b && c>a && a>b)
            {
                c-=1;
                b+=1;
                rounds++;
            }
            else
            {
                c-=1;
                a+=1;
                rounds++;
            }
        }
        cout<<rounds<<endl;
    }
    return 0;
}