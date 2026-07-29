#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,p;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>p;
        if(x*y>=p)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int counter=0;
            while(x*y<p)
            {
            int diff1 = p-((x+1)*y);
            int diff2 = p-((y+1)*x);
            if(diff1<diff2)
            {
                    x++;
                    counter++;
            }
            else
            {
                    y++;
                    counter++;
            }
    }
    cout<<counter<<endl;
        }
    }
    return 0;
}