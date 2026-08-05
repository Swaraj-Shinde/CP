#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(abs(x1-y1)%2==0 && abs(x2-y2)%2==0)
        {
            if(abs(x2-x1)==abs(y2-y1))
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else if(abs(x1-y1)%2!=0 && abs(x2-y2)%2!=0)
        {
             if(abs(x2-x1)==abs(y2-y1))
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}