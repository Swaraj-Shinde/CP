#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int index=0;    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='\\')
        {
            index++;
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<index;i++)
    {
        cout<<s[i];
    }
    return 0;
}