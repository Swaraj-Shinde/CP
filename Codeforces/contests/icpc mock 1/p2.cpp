#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,m;
        cin>>a>>b>>m;
        long long rem1 = (a+1)%m;
        long long rem2 = b%m, toll = 0;
        long long p2 = b-rem2, p1 = a+1+m-rem1;
        if(rem1 == 0){
            toll = ((p2-p1)/m)*(m*(m-1)/2) + (rem2*(rem2+1))/2;
        }
        toll = ((p2-p1)/m)*(m*(m-1)/2) + (m*(m-1)/2) - (rem1*(rem1-1)/2) + (rem2*(rem2+1))/2;
        // cout << toll << endl;
        // long long p1,p2;
        // p1=rem1;
        // long long rem2 = b%m;
        // if(rem2>=rem1)
        // {
        //     p2=b-rem2+rem1;
        // }
        // else
        // {
        //     p2=b-(rem2+1)-((m-1)-rem2);
        // }
        // long long sets = (p2-p1)*m;
        // long long all_rem_sum = (m*(m-1))/2;
        // long long toll = sets*all_rem_sum;
        // for(int i=p2+1;i<=b;i++)
        // {
        //     toll+=i%m;
        // }
        cout<<toll<<endl;
    }
    return 0;
}