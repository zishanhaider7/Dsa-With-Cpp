#include <bits/stdc++.h>

using namespace std;

vector<int> brute(vector<int>&arr,int x)
{
    int n= arr.size();
    int first=-1;
    int last=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x)
        {
            if(first==-1) first=i;
            last=i;
        }
    }
    return {first,last};
    

}

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




int main()
{


return 0;
}