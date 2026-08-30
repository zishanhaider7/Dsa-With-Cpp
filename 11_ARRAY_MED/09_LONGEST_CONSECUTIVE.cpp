#include <bits/stdc++.h>

using namespace std;

bool linears(vector<int>&nums,int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
       if(nums[i]==target)
       {
        return true;
       }
    }
    return false;
    
}
int brute(vector<int>&nums)
{
    int n=nums.size();
    int longest=0;
    for (int i = 0; i < n; i++)
    {
        int cnt=1;
        int x=nums[i];

            while(linears(nums,x+1))
            {
                cnt++;
                x=x+1;
            }
        
        longest=max(longest,cnt);
        
    }
    return longest;
    
}

int better(vector<int>&nums)
{
    sort(nums.begin(),nums.end());
    int longest=1;
    int cnt=1;
    int n=nums.size();
    for (int i = 1; i < n; i++)
    {
        if(nums[i]==nums[i-1]+1)
        {
            cnt++;
        }
        else if(nums[i]==nums[i-1])
        {
            // ignore it because it is same
        }
        else
        {
            cnt=1;
        }
        longest=max(longest,cnt);
    }
    return longest;
}

int optimal(vector<int>&nums)
{
    int longest=0;
    int cnt=1;
    int n=nums.size();
    unordered_set<int>st;
    for(auto)
}
int main()
{
    


return 0;
}