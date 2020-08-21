#include<bits/stdc++.h>
using namespace std;
int ascendingBinarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
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
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int m=ascendingBinarySearch(arr,n,key);
    if(m==-1)
    {
        cout<<key<<" is not present";
    }
    else
    {
        cout<<key<<" is present";
    }

}
