#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> brute(vector<int>&nums)
{
    set<vector<int>> st;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                for (int l = k+1; l < n; l++)
                {
                    long long sum = nums[i]+nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if( sum == 0)
                    {
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);

                    }
                }
                
            }
            
        }
        
    }
    vector<vector<int>> ans(st.begin(),st.end());
    
}

vector<vector<int>> better(vector<int>&arr)
{
    int n = arr.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        set<int> hashmap;
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                long long sum = arr[i]+arr[j]+ arr[k]; 
                int forth= -(sum);
                if( hashmap.find(forth) !=hashmap.end())
                {
                    vector<int> temp ={ arr[i], arr[j],arr[k],forth};
                    st.insert(temp);

                }
            
                hashmap.insert(arr[k]);
                
            }
            
        }
        
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
    
}

vector<vector<int>> optimal(vector<int>& arr)
{
    int n = arr.size();
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        for (int j = i+1; j < n; j++)
        {
            if (j > i+1 && arr[j] == arr[j - 1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];

                if (sum == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);

                    k++;
                    l--;

                    while (k < l && arr[k] == arr[k - 1])
                        k++;

                    while (k < l && arr[l] == arr[l + 1])
                        l--;
                }
                else if (sum > 0)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }

    return ans;
}
int main()
{


return 0;
}