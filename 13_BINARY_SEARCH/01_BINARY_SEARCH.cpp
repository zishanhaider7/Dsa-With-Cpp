#include <bits/stdc++.h>

using namespace std;

int binary(vector<int> &arr,int target)
{
    int n = arr.size();
    int low =0;
    int high=n-1;
    while(low<=high)
    {

        int mid=(low+high)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        if(arr[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;

    
    
}
int main()
{


return 0;
}