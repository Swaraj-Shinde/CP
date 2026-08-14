#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int ascii = ch;
    if(ascii<65)
    {
        cout<<"IS DIGIT";
    }
    else if(ascii<97)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    return 0;
}