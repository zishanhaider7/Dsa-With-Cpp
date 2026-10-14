#include <bits/stdc++.h>

using namespace std;
int first_occ(int arr[],int n,int x)
{
    int first =-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
        {
            first =mid;
            high=mid-1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return first;
}

int last_occ(int arr[],int n,int x)
{
    int last=-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
        {
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return last;
}

int duplicate(int arr[],int n,int x)
{
    return last_occ(arr,n,x) - first_occ(arr,n,x) + 1;
}
int main()
{


return 0;
}