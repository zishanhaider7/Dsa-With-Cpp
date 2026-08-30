#include <bits/stdc++.h>

using namespace std;
vector<int> brute_intersection(vector<int>&a,vector<int>&b,int m)
{
    vector<int> ans;
    int n;
    int m;
    
    if(a.size()>b.size())
    {
        n=a.size();
        m=b.size();
    }
    else if(a.size()<b.size())
    {
        n=b.size();
        m=a.size();
    }
    
    int visited[m]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i]==b[j] && visited[j]==0)
            {
                ans.push_back(a[i]);
                visited[j]=1;
                break;

            }
            if(a[i]<b[j]) break;

        }
        
    }
    return ans;
    
}

vector<int> optimal_intersection(vector<int>&a,int n,vector<int>&b,int m)
{
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n && j<m)
    {
        if(a[i]<b[j]) i++;
        else if(a[i]>b[j]) j++;
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        } 
    }
    return ans;
}
int main()
{
    


return 0;
}