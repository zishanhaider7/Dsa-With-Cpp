#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> brute(vector<int>&arr)
{

    int n=arr.size();
    set<vector<int>> st;


    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(arr[i] + arr[j] + arr[k] ==0)
                {
                    vector<int> temp ={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
            
            
        }
        
    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

vector<vector<int>> better(vector<int>&arr)
{
    int n = arr.size();

    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        
        set<int>hashset;
        for (int j = 0; j < n; j++)
        {
            int third= -(arr[i] + arr[j]);
            if(hashset.find(third) != hashset.end() )
            {
                vector<int> temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());     
                st.insert(temp);           
            }
            hashset.insert(third);
        }
        
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
    

}

vector<vector<int>> optimal(vector<int>&arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if(i>0 && arr[i] == arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=arr[i]+arr[j]+arr[k];
            if(sum == 0)
            {
                vector<int> temp = {arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;

            }

            else if(sum>0) k--;
            else
            {
                j--;
            }

        }
        
        
    }
    

}
int main()
{


return 0;
}