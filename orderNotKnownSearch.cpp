#include<bits/stdc++.h>
using namespace std;
int ascendingBinarySearch(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
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
int descendingBinarySearch(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
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
    int n;
    cin>>n;
    int a[1024];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    if(a[1]<a[0])
    {
         int m=descendingBinarySearch(a,n,key);
         if(m==-1)
        {
        cout<<key<<" is not present";
        }
        else
        {
        cout<<key<<" is present";
        }
    }
    else if(a[1]>a[0])
    {
    int k=ascendingBinarySearch(a,n,key);
    if(k==-1)
    {
        cout<<key<<" is not present";
    }
    else
    {
        cout<<key<<" is present";
    }
    }

}


