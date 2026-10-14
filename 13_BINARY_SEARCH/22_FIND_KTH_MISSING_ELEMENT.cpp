#include <bits/stdc++.h>

using namespace std;

int brute(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            k++;
        }
        else
            return k;
    }
    return k;
}

int optimal(vector<int> &arr, int k)
{
    int n = arr.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);
        if(missing<k) low=mid+1;
        else high=mid-1;

    }
    return low+k;
}
int main()
{

    return 0;
}