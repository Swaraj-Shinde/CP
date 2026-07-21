#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num==1){
        cout<<"0";
    }
    else if(num==2)
    {
        cout<<"0 1";
    }
    else{
        int a=0,b=1;
        cout<<"0 1 ";
        for(int i=3;i<=num;i++){
            int sum=a+b;
            cout<<sum<<" ";
            a=b;
            b=sum;
        }
    }
    return 0;
}