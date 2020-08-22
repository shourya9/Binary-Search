#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int ceil)
{
    int start=0;
    int end=n-1;
    int result=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==ceil)
        {
            return arr[mid];
        }
        else if(arr[mid]>ceil)
        {
            result=arr[mid];
            end=mid-1;
        }
        else if(arr[mid]<ceil)
        {
            start=mid+1;
        }
    }
    return result;
}
int main()
{
    int arr[]={1,2,3,4,8,10,10,12,14};
    int n=sizeof(arr)/sizeof(int);
    int ceil;
    cin>>ceil;
    cout<<binarySearch(arr,n,ceil);
}

