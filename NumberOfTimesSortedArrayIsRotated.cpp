#include<bits/stdc++.h>
using namespace std;

int rotated(int arr[],int n)
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

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
        {
            result=n-mid;
        }
       if(arr[mid]<=arr[end])
        {
            end=mid-1;
        }
        else if(arr[start]<=arr[mid])
        {
            start=mid+1;
        }
    }
    return result;
}

int main()
{
    int arr[]={11,12,15,18,2,5,6,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<rotated(arr,n);

}


