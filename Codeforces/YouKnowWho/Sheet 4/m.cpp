#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string greet="hello";
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(greet[j]==s[i])
        {
            j++;
        }
    }
    if(j==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}