#include<bits/stdc++.h>
using namespace std;

int rotated(int arr[],int n)
{
    int start=0;
    int end=n-1;

    if(arr[0]<arr[n-1])
    {
        return 0;
    }

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
        {
            return n- mid;
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
}

int main()
{
    int arr[]={18,2,5,6,8,11,12,15};
    int n=sizeof(arr)/sizeof(int);
    cout<<rotated(arr,n);

}


