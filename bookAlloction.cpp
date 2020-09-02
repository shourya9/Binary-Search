#include<bits/stdc++.h>
using namespace std;
bool isValid(int a[],int n,int k,int mid)
{
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>mid)
        {
            student++;
            sum=a[i];
        }
        if(student>k)
        {
            return false;
        }
    }
    return true;
}
int findPage(int a[],int n,int k)
{
    int sum=0;
    int res=-1;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(n<k)
    {
        return -1;
    }
    int start=a[n-1];
    int end=sum;
    while(start<=end)
    {
        int mid=start +(end-start)/2;
        if(isValid(a,n,k,mid)==true)
        {
            res=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return res;
}
int main()
{
    int a[]={10,20,30,40};
    int k=2;
    int n=sizeof(a)/sizeof(int);
    cout<<findPage(a,n,k);
}
