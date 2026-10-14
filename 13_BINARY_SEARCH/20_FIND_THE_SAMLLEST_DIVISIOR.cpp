#include <bits/stdc++.h>

using namespace std;
int maxx(vector<int>&arr)
{
    int n =arr.size();
    int maxxx=arr[0];
    for (int i = 1; i < n; i++)
    {
        maxxx=max(maxxx,arr[i]);
    }
    return maxxx;
}

int sum_of_divisor(vector<int>&arr,int num)
{
    int n= arr.size();
    int sum=0;

    for (int i = 0; i < n; i++)
    {
         sum += ceil((double)arr[i] / num);
    }
    return sum;
}

int brute(vector<int>&arr,int threshold)
{
    int n= arr.size();
    int min_element=1;
    int max_element=maxx(arr);

    for (int i = min_element; i <= max_element; i++)
    {
        if(sum_of_divisor(arr,i)<=threshold) return i;
    }
    return -1;

}

int optimal(vector<int> &arr,int thresold)
{
    int n= arr.size();
    int low=1;
    int high=maxx(arr);

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(sum_of_divisor(arr,mid)<=thresold) high=mid-1;
        else low=mid+1;
    }

    return low;
}
int main()
{


return 0;
}