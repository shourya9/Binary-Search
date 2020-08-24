#include<bits/stdc++.h>
using namespace std;
char binarySearch(string s,int n,char l)
{
    int start=0;
    int end=n-1;
    char result='#';
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(s[mid]==l)
        {
            start=mid+1;
        }
        else if(s[mid]>l)
        {
            result=s[mid];
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
    string s="acfh";
    int n=s.size();

    char l;
    cin>>l;

    cout<<binarySearch(s,n,l);
}
