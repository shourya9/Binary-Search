#include<bits/stdc++.h>
using namespace std;
bool canPlaceCows(int stalls[],int n,int cows,int min_step)
{
    int last_cow=stalls[0];
    int count=1;

    for(int i=1;i<n;i++)
    {
        if(stalls[i]-last_cow>=min_step)
        {
            last_cow=stalls[i];
            count++;

            if(count==cows)
            {
            return true;
            }
        }
    }
    return false;
}


int main()
{
    int stalls[]={1,2,4,8,9};
    int n=sizeof(stalls)/sizeof(int);
    int cows=3;

    int start=0;
    int end=stalls[n-1]-stalls[0];
    int ans=0;

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        bool m=canPlaceCows(stalls,n,cows,mid);
        if(m==true)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    cout<<ans;
}
