#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=0;
    int n,i;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
     cin>>s;
     if(s[1]=='+' || s[-1]=='+')
     {
        x+=1;
     }
     else
     {
        x-=1;
     }
    }
    cout<<x;
    return 0;
}