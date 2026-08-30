#include <bits/stdc++.h>

using namespace std;

vector<int> brute(vector<int>&nums)
{
    int n=nums.size();
    bool leader=true;
    vector<int>ans;

    for (int i = 0; i < n; i++)
    {

        for (int j = i+1; j < n; j++)
        {
            if(nums[i]<nums[j])
            {
                leader=false;
                break;
            }
        }
        if(leader) ans.push_back(nums[i]);
        
    }
    return ans;
    
}

vector<int> optimal(vector<int>&nums)
{
    int maxx=INT_MIN;
    int n =nums.size();
    vector<int>ans;
    for (int i = n-1; i >= 0; i--)
    {
        if(nums[i]>maxx)
        {
            ans.push_back(nums[i]);
            maxx=nums[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
}

int main()
{
    


return 0;
}