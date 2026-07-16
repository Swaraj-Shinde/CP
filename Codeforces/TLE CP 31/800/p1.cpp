#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long nos,i;
    cin>>t;
    string arr1[t];
    int count=0;
    while(t--)
    {
        cin>>nos;
        long long arr[nos];
        for(i=0;i<nos;i++)
        {
          cin>>arr[i];
        }
      long long sum_oa,sum;
      sum=(nos)*(nos+1)/2;
      sum_oa=accumulate(arr,arr+nos,0);

      if(sum_oa<sum-1)
      {
        arr1[count]="NO";
        count++;
      }
      else
      {
        if(arr[0]==arr[1]==1)
        {
            arr1[count]="NO";
        count++;
        }
        else
        {
            arr1[count]="YES";
            count++;
        }
      }

    }
    for(i=0;i<count;i++)
    {
        cout<<arr1[i]<<endl;
    }
  return 0;
}