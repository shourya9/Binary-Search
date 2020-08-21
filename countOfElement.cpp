#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            result=mid;
            end=mid-1;
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
    return result;
}
int lastOccurence(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            result=mid;
            start=mid+1;;
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
    return result;
}
int main()
{
    int arr[]={2,2,24,10,10,10,18,20};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    int m=firstOccurence(arr,n,key);

    int k=lastOccurence(arr,n,key);

    cout<<k-m+1;

}

