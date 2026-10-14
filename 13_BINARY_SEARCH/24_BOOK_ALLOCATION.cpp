#include <bits/stdc++.h>

using namespace std;

int max_element(vector<int>&arr)
{
    int n=arr.size();
    int maxx=arr[0];
    for (int i = 1; i < n; i++)
    {
        maxx=max(maxx,arr[i]);
    }
 
    return maxx;
}
int summ(vector<int> &arr)
{
    int n=arr.size();
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}
int cnt_student(vector<int> &arr,int max_page)
{
    int n=arr.size();
    int student=1;
    int pages=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]+pages<=max_page)
        {
            pages+=arr[i];
        }
        else
        {
            student++;
            pages=arr[i];
        }

    }
    return student;

}
int optimal(vector<int>&arr,int student)
{
    int n = arr.size();
    int low=max_element(arr);
    int high=summ(arr);
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(cnt_student(arr,mid)>student) low=mid+1;
        else high=mid-1;; 
    }
    return low;
}


int linear(vector<int> &arr,int student)
{
    int n= arr.size();
    int low=max_element(arr);
    int high=summ(arr);
    
    for (int i = low; i < high; i++)
    {
        int total_student=cnt_student(arr,i);
        if(total_student==student)return i;
    }
    return -1;

}
int main()
{
    vector<int> arr={25,46,28,49,24};
    cout<<summ(arr)<<endl;

    
return 0;
}