#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int ascii = ch;
    if(ascii>=65 && ascii<=90)
    {
        char output = tolower(ch);
        cout << output;
    }
    else
    {
        char output = toupper(ch);
        cout << output; 
    }
    return 0;
}