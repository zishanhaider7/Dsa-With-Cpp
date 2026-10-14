#include <bits/stdc++.h>

using namespace std;

bool canWePlace(vector<int>&arr,int min_distance,int cow)
{
    int n=arr.size();
    int n_cow=1;
    int j=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]-arr[j]>=min_distance) 
        {
            n_cow++;
            j=i;
        }
        else continue;
    }

    if(n_cow>=cow) return true;
    else return false;
    
}

int linear(vector<int>&arr ,int cow)
{
    int n = arr.size();
  
    for (int i = 1; i < n; i++)
    {
        
        if(canWePlace(arr,i,cow))
        {
            continue;
            
        }
        else
        {
            return i-1;
        } 

    }
  
    return n-1;
    

}

int optimal(vector<int>&arr, int cow)
{
    int n = arr.size();

    int low=1;
    int high=arr[n-1]-arr[0];
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(canWePlace(arr,mid,cow)) low=mid+1;
        else high=mid-1;
    }
    return high;
}

int main()
{


return 0;
}