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

        if(mpp.find(required) != mpp.end())
        {            
            return {mpp[required],i};  // it will checked is required is availabel in hash-map or not
        }

        else
        {
            mpp[num]=i;  // it will push the element in the hash-map  so every element will pushed into the map one by one
        }

    }

    return {-1,-1};
    
}


string optimal(vector<int>&arr,int target)
{
    int left=0;
    int right =arr.size()-1;
    sort(arr.begin(),arr.end());
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==target) return "lets go we have finded the answer of two sum ";

        else if(sum<target) left++;
        else right--;
    }
    return "No";
}


int main()
{
    vector<int> arr={1,2,3,4,5};
    int target=5;
    // better(arr,target);
    cout<<optimal(arr,target)<<endl;
    


return 0;
}