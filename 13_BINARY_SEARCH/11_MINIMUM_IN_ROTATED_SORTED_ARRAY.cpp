#include <bits/stdc++.h>

using namespace std;

int brute(vector<int> &arr)
{
    int min=arr[0];
    int n= arr.size();
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]<min)
        {
            min=arr[i+1];
        }
    }
    return min;
    

}

int optimal(vector<int>&arr)
{
    int n=arr.size();
    int low=0;
    int high =n-1;
    int minn=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;

        // if entire array is sorted you can find arr[low] is minimum
        if(arr[low]<=arr[mid] <=arr[high])
        {
            minn=min(arr[low],minn);
            break;
        }

        // if left side is sorted
        if(arr[low] <= arr[mid])
        {
            minn=min(minn,arr[low]);
            low=mid+1;
        }
        //  if right side is sorted
        else 
        {
            minn=min(minn,arr[mid]);
            high=mid-1;
        }
    }
    return minn;
}
int main()
{


return 0;
}