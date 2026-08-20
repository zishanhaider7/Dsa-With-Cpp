#include <bits/stdc++.h>

using namespace std;
void brute(int arr[],int n,int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] +arr[j]  == target)
            {
                cout<<"we get it at arr["<<i<<"]"<<"arr["<<j<<"]"<<endl;
                break;
            } 

        }
    
    }
    
}


vector<int> better(vector<int>&arr,int target)
{
    map<int,int>mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        int num=arr[i];
        int required=target-num;
        if(mpp.find(required) != mpp.end()) cout<<"yes at index  "<<mpp[required]<<"and"<<i<<endl;
        else
        {
            mpp[num]=i;
        }
    }
    return {-1,-1};
    
}


string optimal(vector<int>&arr,int target)
{
    int left=0;
    int right =arr.size()-1;

    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==target) return "yes we get it";

        else if(sum<target) left++;
        else right++;
    }
    return "No";
}


int main()
{
    vector<int> arr={1,2,3,4,5};
    int target=5;
    better(arr,target);
    


return 0;
}