#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int floor)
{
    int start=0;
    int end=n-1;
    int result=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==floor)
        {
            return arr[mid];
        }
        else if(arr[mid]>floor)
        {
            end=mid-1;
        }
        else if(arr[mid]<floor)
        {
            result=arr[mid];
            start=mid+1;
        }
    }
    return result;
}
int main()
{
    int arr[]={1,2,3,4,8,10,10,12,14};
    int n=sizeof(arr)/sizeof(int);
    int floor;
    cin>>floor;
    cout<<binarySearch(arr,n,floor);
}
