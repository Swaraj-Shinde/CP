#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    int years= n/365;
    cout<<years<<" years\n";
    int months = n%365;
    months = months/30;
    cout<<months<<" months\n";
    int days = (n%365);
    days = days%30;
    cout<<days<<" days\n";
    return 0;
}