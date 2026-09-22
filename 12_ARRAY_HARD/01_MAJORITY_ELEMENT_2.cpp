#include <bits/stdc++.h>

using namespace std;
vector<int> better(vector<int>&arr)
{
    int n= arr.size();
    map<int,int> lst;
    vector<int>ans;
    int req=(n/3)+1;

    for (int i = 0; i < n; i++)
    {
        lst[arr[i]]++;        
    }

    for(auto it:lst)
    {
        if(it.second >= req)
        {
            ans.push_back(it.first);
        }
    }
    
    return ans;
}

vector<int> optimal(vector<int>&arr)
{
    int n=arr.size();
    int el1=INT_MIN;
    int el2=INT_MIN;
    int cnt1=0;
    int cnt2=0;
    int req=n/3+1;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if(cnt1==0 && arr[i] != el2)
        {
            cnt1=1;
            el1=arr[i];
        }
        else if(cnt2==0 && arr[i] != el1)
        {
            cnt2=1;
            el2=arr[i];
        }

        else if(arr[i] == el1) cnt1++;
        else if(arr[i] == el2) cnt2++;

        else
        {
            cnt1--;
            cnt2--;
        }

    }

    cnt1=0;
    cnt2=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==el1) cnt1++;
        if(arr[i]==el2) cnt2++;
    }

    if(cnt1>=req) ans.push_back(el1);
    if(cnt2>=req) ans.push_back(el2);
    return ans;
    
}


int main()
{
    


return 0;
}