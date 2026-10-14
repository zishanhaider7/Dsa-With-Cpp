#include <bits/stdc++.h>

using namespace std;

int total_hour_claculation(vector<int> arr,int mid)
{
    int n=arr.size();
    int hour=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=mid)  hour+=1;
        else if(arr[i]%mid==0) hour+=arr[i]/mid;
        else if(arr[i]%mid!=0) hour+=(arr[i]/mid)+1;

    }
    return hour;
    
}

int koko(vector<int> & arr,int fix_hour)
{
    int n =arr.size();
    int max_element = arr[0]; 

    // this is to find the max element in the array 
    for (int  i = 1; i < n; i++)
    {
        max_element=max(max_element,arr[i]);
        
    }

    int low=1;
    int high=max_element;
    while(low<=high)
    {
        int mid= (low + high)/2;
        int hour=total_hour_claculation(arr,mid);
       
        // if calculated hour is less than fix_hour then eliminate the right side from our range
        if(hour<=fix_hour) high=mid-1;
        

        // if calculated hour is greater than the given hour then eliminate the left side from our range
        else if(hour>fix_hour) low=mid+1;

        
    }

    // if u dry run u find than low point to the minimum hour taken & high is pointing to that element which is greater than fixed_hour
    return low;

    
    

}
int main()
{


return 0;
}