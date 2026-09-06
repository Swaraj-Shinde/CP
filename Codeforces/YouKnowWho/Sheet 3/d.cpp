#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long num;
        cin>>num;
        if(num<=10)
        {
            cout<<"A["<<i<<"] = "<<num<<endl;
        }
    }
    return 0;
}