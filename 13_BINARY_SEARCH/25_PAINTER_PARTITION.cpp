#include <bits/stdc++.h>

using namespace std;
int max_element(vector<int> &arr)
{
    int n = arr.size();
    int maxx = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
    }

    return maxx;
}
int summ(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int cnt_worker(vector<int> &arr, int limit)
{
    int n = arr.size();
    int worker = 1;
    int works = 0;
    for (int i = 0; i < n; i++)
    {
          if (arr[i] + works <= limit)
        {
            works += arr[i];
        }
        else
        {
            worker++;
            works = arr[i];
        }
    }
    return worker;
}

int brute(vector<int> &arr, int k)
{
    int low = max_element(arr);
    int high = summ(arr);
   
    for (int i = low; i <= high; i++)
    {
        if(cnt_worker(arr,i) <= k) return i;
    }
    return -1;
}

int optimal(vector<int>&arr,int k)
{
    int n=arr.size();
    int low=max_element(arr);
    int high=summ(arr);
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(cnt_worker(arr,mid)<=k) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main()
{

    return 0;
}