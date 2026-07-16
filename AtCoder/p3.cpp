#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,count1=0,count2=0;
    string ans;
    cin>>N;
    int i,j;
    
    for(i=1;i<N;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            if(count2<2*N)
            {
             cout<<"? "<<i<<" "<<j<<endl;
             cin>>ans;
             count2++;
             if(ans=="Yes")
             {
                count1++;
             }
            }
            else
            {
                cout<<"! "<<count1<<endl;
                break;
            }
        }
    }
    return 0;
}