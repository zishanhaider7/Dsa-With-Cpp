#include <bits/stdc++.h>

using namespace std;
void brute(vector<vector<int>>&arr)
{
    int n=arr.size();
    int m= arr[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==0)
            {
                // make all row -1
                for (int k = 0; k < m; k++)
                {
                    if(arr[i][k]!=0)
                    {
                        arr[i][k]=-1;
                    }
                }

                // make all column -1
                for (int k = 0; k < n; k++)
                {
                    if(arr[k][j]!=0)
                    {
                        arr[k][j]=-1;
                    }
                }
                
                
            }
        }

        
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // make all  -1 == 0 
            if(arr[i][j]==-1)
            {
                arr[i][j]=0;
            }
        }
        
    }
    
}
int main()
{
    


return 0;
}