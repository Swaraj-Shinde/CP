#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int sum=0;
        int x1=min(x,y);
        int y1=max(x,y);
        for(int i=x1+1;i<y1;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}