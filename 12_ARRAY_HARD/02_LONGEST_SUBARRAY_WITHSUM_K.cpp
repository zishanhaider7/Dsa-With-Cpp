#include <bits/stdc++.h>

using namespace std;

int brute(vector<int> &arr, int target)
{
    int n = arr.size();
    int maxlenth = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];

        if (sum == target)
        {
            maxlenth = max(maxlenth, 1);
        }
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                maxlenth = max(maxlenth, j - i + 1);
            }
        }
    }
    return maxlenth;
}

int better(vector<int> &arr,int k)
{
    int n = arr.size();
    int sum=0;
    map<long long,int> presum;
    int maxlen=0;
    //  we store in map   (presum,index)

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(sum==k)
        {
            maxlen=i+1;
        }
        int remaining= sum-k;
        
        if(presum.find(remaining) !=presum.end())
        {
            maxlen=max(maxlen,i-presum[remaining]);
        }


        if(presum.find(sum) == presum.end())
        {
            presum[sum]=i;
        }
        // it can store the value of same sum mulitple time with incresing index 


    }

    return maxlen;
    
}

int optimal(vector<int> &arr,int k)
{
    int n= arr.size();
    int maxlen=0;
    int right=0;
    int left=0;
    int sum=arr[0];
    while(right < n)
    {
        while(right >= left && sum>k)
        {
            sum -= arr[left];
            left++;
        }
        
        if(sum==k) 
        {
            maxlen=max(maxlen,right-left+1);
        }
        
        right++;
        if(right < n)
        {
            sum +=arr[right];
        }
        
    }
    

}
int main()
{

    return 0;
}