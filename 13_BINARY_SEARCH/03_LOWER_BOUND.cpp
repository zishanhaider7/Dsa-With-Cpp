#include <bits/stdc++.h>

using namespace std;


int brute_lower_bound(vector<int> & arr,int l_bound)
{
    int n= arr.size();
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]>=l_bound)
        {
            return i;
        }
        
    }
    return n;
    
}

int optimal_lower_bound(vector<int> & arr,int target)
{
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans =n;
    
    while (low<=high)
    {
        
        
        int mid=low+(high-low)/2;
        if(arr[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;

    
        
}
    
    
    
int main()
{


return 0;
}