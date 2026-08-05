#include <bits/stdc++.h>
using namespace std;

int main() {
int t,n,x,y;
cin>>t;
while(t--)
{
    cin>>n>>x>>y;
    if(n<=3)
    {
        cout<<x*n<<endl;
    }
    else
    {
        cout<<3*x+(n-3)*y<<endl;
    }
}
return 0;
}
