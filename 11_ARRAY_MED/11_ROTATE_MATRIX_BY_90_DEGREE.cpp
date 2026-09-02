#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> selff(vector<vector<int>> &arr)
{
    int n=arr.size();
    
    vector<vector<int>> ans(n, vector<int>(n));
    
    int m=arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][m-1]=arr[i][j];
        }
        m--;
    }
    return ans;
    
}

void optimal(vector<vector<int>>&matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    // first we have to transpose the matrix

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }

    // now we need to reverse the every row to get the rotated version of the matrix
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    
    
}
int main()
{


    


return 0;
}