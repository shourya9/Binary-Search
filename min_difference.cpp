#include<bits/stdc++.h>
using namespace std;
int minDifference(int a[],int n,int k)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==k)
        {
            return a[mid];
        }
        else if(a[mid]<k)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    int l=abs(k-a[start]);
    int h=abs(k-a[end]);
    if(l<h)
    {
        return a[start];
    }
    else
    {
        return a[end];
    }
}
int main()
{
    int a[]={1,3,8,10,15};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    cout<<minDifference(a,n,k);
}
