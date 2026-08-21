#include <bits/stdc++.h>

using namespace std;
int brute(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }

        }
        if(cnt>(n/2))
        {
            return arr[i];
        }
        
    }
    return -1;
    
}

int better(vector<int>&arr)
{
    map<int,int>mpp;
    int n=arr.size();

    // all element are initialized in map 
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;

    }

    for(auto it : mpp)
    {
        if(it.second>(n/2))
        {
            return it.first;  
        }
       
    }
    return -1;
    
}

int optimal(vector<int>&arr)  // Moores voting algorithm
{
    int cnt=0;
    int element;
    int n=arr.size();

    // here we checked which element is appeared more times
    for (int i = 0; i < n; i++)
    {
        if(cnt==0) // it give the new candidate when we count reduce to the zero 
        {
            cnt=1;
            element=arr[i];
        }

        else if(element==arr[i]) cnt++; // count get increased when we get same element

        else cnt--;    //count get decreased when we get different element 
    }

    int cnt1=0; // it is for  checking  majority element exist or not

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==element) cnt1++;
    }

    if(cnt1>(n/2)) return element;
      
}

int main()
{
    // int n=10;
    int arr1[]={1,2,3,3,3,3,1,1,3,3};
    int n =sizeof(arr1)/sizeof(int);
    cout<<"size of the array = "<<n<<endl;
    vector<int> arr2={1,2,3,3,3,3,1,1,3,3};

    cout<<"majority element appear in this array is "<<brute(arr1,n)<<endl;
    cout<<"majority element appear in this array is "<<better(arr2)<<endl;


return 0;
}