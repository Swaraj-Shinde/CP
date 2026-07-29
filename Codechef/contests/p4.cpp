#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    int i,j,k;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        long long copy_arr[n];
        long long sorted_arr[n];
        int flag=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n/2;i++)
        {
            if(arr[i]!=arr[n-1-i])
            {
                break;
            }
            else
            {
                cout<<"Yes"<<endl;
                flag=1;
            }
        }
        if(flag==0)
        {
            int no_count=0;
            sort(sorted_arr,sorted_arr+n);
            long long lower_limit=sorted_arr[0];
            long long upper_limit=sorted_arr[n-1];

        for(i=lower_limit;i<=upper_limit;i++)
        {
            for(j=0;j<n;j++)
            {
                copy_arr[j]=arr[j];
            }
            long long value=arr[i];
            for(j=0;j<n;j++)
            {
                if(arr[j]<=value)
                {
                    copy_arr[j]+=1;
                }
                else
                {
                    copy_arr[j]-=1;
                }
            }
            int same_elem_count=0;
            int same_elem_count_flag=0;
            for(k=0;k<n/2;k++)
            {
                
            if(copy_arr[k]!=copy_arr[n-1-k])
            {
                same_elem_count_flag=1;
                break;
            }
            else
            {
                same_elem_count++;
            }
            }
            if(same_elem_count_flag!=1)
            {
            if(same_elem_count!=n/2)
            {
                no_count++;
            }
            else
            {
                cout<<"Yes"<<endl;
                break;
            }
            }
        }
    
        if(no_count==(upper_limit-lower_limit+1))
        {
            cout<<"No"<<endl;
        }
    }
    }
    return 0;
}