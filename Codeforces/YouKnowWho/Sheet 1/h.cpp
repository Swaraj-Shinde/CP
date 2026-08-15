#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    int floor = a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor<<endl;
    int ceil;
    if(floor==a/b)
    {
        cout<<"ceil "<<a<<" / "<<b<<" = "<<floor<<endl;
    }
    else
    {
        cout<<"ceil "<<a<<" / "<<b<<" = "<<floor+1<<endl;
    }
    if(a/b-floor<0.5)
    {
        cout<<"round "<<a<<" / "<<b<<" = "<<floor<<endl;
    }
    else
    {
        cout<<"round "<<a<<" / "<<b<<" = "<<floor+1<<endl;
    }
    return 0;
}