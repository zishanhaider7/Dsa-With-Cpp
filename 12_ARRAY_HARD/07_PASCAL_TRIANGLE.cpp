#include <bits/stdc++.h>

using namespace std;

int type1(int r,int c)
{
    int ans=1;
    for (int i = 0; i < (c-1); i++)
    {
        ans=ans*(r-1-i);
        ans=ans/(i+1);
    }
    return ans;
}

void type2_brute(int n)
{
    for ( int c = 1; c <= n; c++)
    {
        cout<<type1(n,c)<<" ";
    }
    
}

void type2_better(int n)
{
    int ans=1;
    cout<<ans<<" ";
    for (int c = 0; c < n; c++)
    {
        ans=ans*(n-c);
        ans=ans/(c+1);
        cout<<ans<<" ";

    }
    
}

vector<vector<int>> optimal_1(int n)
{
    vector<vector<int>> ans;
    for (int row = 0; row < n; row++)
    {
        vector<int>temp;
        for (int col = 0; col <= row; col++)
        {
            temp.push_back(type1(row+1,col+1));
        }
        ans.push_back(temp);
    }
    return ans;
}

vector<int> generaterow(int row)
{
    vector<int> ansrow;
    long long ans=1;
    ansrow.push_back(1);
    for (int col = 1; col < row; col++)
    {
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}

vector<vector<int>> pascaltriangle(int n)
{
    vector<vector<int>>ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(generaterow(i));
    }
    return ans;

    
}

int main()
{
    type2_better(5);
    cout<<"done"<<endl;


return 0;
}