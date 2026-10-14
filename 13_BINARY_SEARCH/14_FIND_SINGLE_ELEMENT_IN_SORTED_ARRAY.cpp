#include <bits/stdc++.h>

using namespace std;

int brute(vector<int>&arr)
{
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        // for the first element
        if(i==0)
        {
            if(arr[i] !=arr[i+1])
            {
                return arr[i];
            }
        }

        // for the last element
        if(i==n-1)
        {
            if(arr[i]!=arr[i-1])
            {
                return arr[i];
            }
        }

        // for all the middle element
        if(arr[i] != arr[i-1] && arr[i] !=arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
    
}

int optimal(vector<int> &arr)
{
    int n= arr.size();
    // check for the first element
    if(arr[0] != arr[1]) return arr[0];
    
    // check for the last  element
    if(arr[n-1] != arr[n-2]) return arr[n-1];


    int low=1;
    int high=n-2;    // because we have checked first and last before


    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
        {
            return arr[mid];
        }

        // now we check for the all middle element 

        // if we are in left half  (even,odd)
        if(mid%2==1 && arr[mid-1]==arr[mid] || mid%2==0 &&arr[mid]==arr[mid+1])
        {
            // eliminate the left one
            low=mid+1;
        }

        else
        {
            high=mid-1;
        }
        
    }
     
    return -1;
}

int main()
{


return 0;
}