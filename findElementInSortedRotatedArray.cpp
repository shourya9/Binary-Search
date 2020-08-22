#include<bits/stdc++.h>
using namespace std;

int minElement(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int result=0;
    if(arr[0]<arr[n-1])
    {
        result=0;
    }
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;

        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
        {
            result=mid;
        }
        if(arr[mid]<=arr[end])
        {
            end=mid-1;
        }
        else if(arr[mid]>=arr[start])
        {
            start=mid+1;
        }
    }
    return result;
}

int binarySearch(int arr[],int start,int end,int key)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
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

int main(){
    int arr[]={11,12,15,18,2,5,6,8};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    int m=minElement(arr,n);

    int l=binarySearch(arr,0,m-1,k);
    int h=binarySearch(arr,m,n-1,k);

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
        cout<<"Element not present";
    }


}
