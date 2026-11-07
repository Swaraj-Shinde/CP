#include <bits/stdc++.h>
using namespace std;

long long fq(long long a, long long b, long long q)
{
    if(q % 3 == 1)
        return a;
    else if(q % 3 == 2)
        return b;
    else
        return (a ^ b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long a,b,q;
    cin>>a>>b>>q;
    cout<<fq(a,b,q);
    return 0;
}