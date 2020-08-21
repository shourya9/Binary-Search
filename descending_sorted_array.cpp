#include<bits/stdc++.h>
using namespace std;
int descendingBinarySearch(int arr[],int n,int key)
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
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int m=descendingBinarySearch(arr,n,key);
    if(m==-1)
    {
        cout<<key<<" is not present";
    }
    else
    {
        cout<<key<<" is present";
    }

}

