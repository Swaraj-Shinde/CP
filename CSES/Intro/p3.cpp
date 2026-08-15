#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,counter = 0;
    char ch = s[0];
    int output=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==ch)
        {
            counter++;
        }
        else
        {
            output=max(output,counter);
            ch=s[i];
            counter = 1;
        }
    }
    output=max(output,counter);
    cout<<output;
    return 0;
}