#include<bits/stdc++.h>
using namespace std;

int modifiedBinarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        if(mid-1>=start && key==arr[mid-1])
        {
            return mid-1;
        }
        if(mid+1<=end && key==arr[mid+1])
        {
            return mid+1;
        }
        if(arr[mid]>key)
        {
            end=mid-2;
        }
        else if(arr[mid]<key)
        {
            start=mid+2;
        }
    }
    return -1;
}

int main()
{
    int arr[]={5,10,30,20,40};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<modifiedBinarySearch(arr,n,key);
}
