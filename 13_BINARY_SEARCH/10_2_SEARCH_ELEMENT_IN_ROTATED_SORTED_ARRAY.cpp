#include <bits/stdc++.h>

using namespace std;

int search_1(vector<int>&arr,int target)
{
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(arr[mid]==target) return mid;

        if(arr[mid]==arr[low] && arr[mid] == arr[high])
        {
            low++;
            high--;
            continue;
        }
        // Left sorted
        if(arr[low]<=arr[mid])
        {
            if(target>=arr[low] && target<=arr[mid])
            {
                high=mid-1;
            }
            else low=mid+1;
        }

        // Right sorted

        else
        {
            if(target>=arr[mid] && target<=arr[high])
            {
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return -1;
}
int main()
{


return 0;
}