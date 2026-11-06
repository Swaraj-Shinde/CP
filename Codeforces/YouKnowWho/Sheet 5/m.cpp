#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int n;
        cin>>n;
        s.insert(n);
    }
    cout<<s.size();
    return 0;
}