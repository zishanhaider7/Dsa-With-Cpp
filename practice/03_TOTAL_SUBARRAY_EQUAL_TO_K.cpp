#include <bits/stdc++.h>

using namespace std;

int brute(vector<int>&arr,int target)
{
    int n=arr.size();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum =0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
            }
            if(sum==target)
            {
                cnt++;
            }
            
        }
        
    }
    
    return cnt;
}

int better(vector<int>&arr,int k)
{
    int n=arr.size();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            if(sum==k) cnt++;
        }
        
    }
    
    return cnt;
}

int optimal(vector<int> &arr,int k)
{
    int n =arr.size();
    map<int,int> mpp;
    mpp[0]=1;
    int cnt=0;
    int presum=0;
    for (int i = 0; i < n; i++)
    {
        presum+=arr[i];
        int remaining=presum-k;
        if(mpp.find(remaining) != mpp.end())
        {
            cnt+=mpp[remaining];
        }
        mpp[presum]++;


    }
    return cnt;
    
}
int main()
{


return 0;
}