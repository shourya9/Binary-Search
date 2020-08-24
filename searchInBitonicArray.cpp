#include<bits/stdc++.h>
using namespace std;
int maxElementInBitonicArray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start +(end-start)/2;
        if(mid>0 && mid<n-1)
        {
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid-1]>arr[mid])
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else if(mid==0)
        {
            if(arr[0]>arr[1])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else if(mid==n-1)
        {
            if(arr[n-1]>arr[n-2])
            {
                return n-1;
            }
            else
            {
                return n-2;
            }
        }
    }
}

int ascendingBinarySearch(int arr[],int start,int end,int key)
{
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int descendingBinarySearch(int arr[],int start,int end,int key)
{
     while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,3,8,12,4,2};
    int n=sizeof(arr)/sizeof(int);
    int m=maxElementInBitonicArray(arr,n);
    int k;
    cin>>k;
    int l=ascendingBinarySearch(arr,0,m-1,k);
    int h=descendingBinarySearch(arr,m,n-1,k);
    if(l>=0)
    {
        cout<<l;
    }
    else if(h>=0)
    {
        cout<<h;
    }
    else
    {
        cout<<k<<" is not present";
    }
}

