#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    int l=0;
    double arr[18];
    int digit_count=0;
    int last_digit,i;
    cin>>x;

    while(x>0)
    {
     last_digit=x%10;
     digit_count+=1; 
     if(last_digit>9-last_digit)
     {
        arr[l]=9-last_digit;
        l++;
     }
     else
     {
        arr[l]=last_digit;
        l++;
     }
     x=x/10;
}

if(arr[digit_count-1]==0)
{
    arr[digit_count-1]=9;
}

    for(i=digit_count-1;i>=0;i--)
    {
      cout<<arr[i];
    }
    return 0;
}