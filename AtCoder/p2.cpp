#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    int ball_colour[n],ball_size[n];
    int max_size[n];
    int colour_present=0;
    for(i=0;i<n;i++)
    {
        cin>>ball_colour[i]>>ball_size[i];
    }
   sort(ball_colour,ball_colour+n);

   for(i=0;i<n;i++)
   {
    for(j=i+1;j<=n+1;j++)
    {
      if(ball_colour[i]==ball_colour[j])
      {
        max_size[i]=max(ball_size[i],ball_size[j]);
      }
    }
   }

   for(k=1;k<=m;k++)
   {
    for(i=0;i<n;i++)
    {
        if(k==ball_colour[i])
        {
         colour_present=1;
        }
    }
    if(colour_present==0)
    {
        cout<<"-1 ";
    }
    else
    {
     cout<<max_size[k-1]<<" ";
    }

   }
    return 0;
}