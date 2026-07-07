#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    int arr[t];
    for(i=0;i<t;i++)
    {
     cin>>arr[i];
    }

    for(i=0;i<t;i++)
    {
        int multiple=1;
        int j=0,count;
        int num=arr[i];
        int arr2[4];
        while(num>0)
        {
            int last_digit=num%10;
            if(last_digit==0)
            {
                multiple*=10;
                num=num/10;
            }
            else{
            arr2[j]=last_digit*multiple;
            j++;
            count=j;
            multiple*=10;
            num=num/10;
            }
        }
        cout<<count<<endl;
        for(j=0;j<count;j++)
        {
            cout<<arr2[j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}