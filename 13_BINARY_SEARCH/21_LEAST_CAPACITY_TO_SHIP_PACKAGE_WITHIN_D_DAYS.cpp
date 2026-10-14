#include <bits/stdc++.h>

using namespace std;
int max_weigth_in_list(vector<int> &arr)
{
    int n = arr.size();
    int maxxx = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxxx = max(maxxx, arr[i]);
    }
    return maxxx;
}

int sum_of_all_element_in_array(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int how_much_day_it_take_to_fill_in_that_capacity_perday(vector<int> &arr, int capacity)
{
    int n = arr.size();
    int day = 1;
    int load = 0;
    for (int j = 0; j < n; j++)
    {

        if (arr[j] + load <= capacity)
        {
            load += arr[j];
        }
        else
        {
            day++;
            load=arr[j];
        }
    }
    return day;
}

int by_linear_S(vector<int> &arr, int total_day)
{
    int n = arr.size();
    int least_capacity_that_possible_perday = max_weigth_in_list(arr);
    int max_capacity_that_possibel_perday = sum_of_all_element_in_array(arr);

    
    for (int i = least_capacity_that_possible_perday; i <= max_capacity_that_possibel_perday; i++)
    {
         
        if(how_much_day_it_take_to_fill_in_that_capacity_perday(arr,i)<=total_day)
        {
            return i;
        }
    
    }
    return -1;
}


int optimal(vector<int>&arr,int total_day)
{
    int low=max_weigth_in_list(arr);
    int high=sum_of_all_element_in_array(arr);

    while(low<=high)
    {
        int mid=(low+high)/2;
        int day_take_in_that_capacity=how_much_day_it_take_to_fill_in_that_capacity_perday(arr,mid);
        if(day_take_in_that_capacity<=total_day)
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;
}

int main()
{

    return 0;
}