#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>&arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j)
    {

        while(arr[i]<=pivot && i<high)               // for ascending 
        // while(arr[i]>=pivot && i<high)            // for descending
        {
            i++;
        }
        
        while(arr[j]>pivot && j>low)            // for ascending 
        // while(arr[j]<pivot && j>low)         // for descending
        {
            j--;
        }
        
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int pivot=partition(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
    }
}

int main()
{
    vector<int>arr={3,2,4,5,1,3};
    int high=arr.size()-1;
    int low=0;
    quick_sort(arr,low,high);
    
    for(int it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    


return 0;
}