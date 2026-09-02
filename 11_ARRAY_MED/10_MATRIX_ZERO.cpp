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

void better(vector<vector<int>>&arr)
{
    int n=arr.size();
    int m=arr[0].size();

    int row[n]={0};
    int column[m]={0};

    // mark all the row or column value to 1 if there is 0 in the row or column 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=1;
                column[j]=1;
            }
        }
        
    }

    // now if ther is any 0 found in row or column we make that row or column 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(row[i]==1 || column[j]==1)
            {
                arr[i][j]=0;
            }
        }
        
    }
    

    


}

void optimal(vector<vector<int>>&arr)
{
    int n=arr.size();
    int m=arr[0].size();

    // row = arr[....][0]
    // col = arr[0][....]
    int col0=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==0)
            {
                // for row
                arr[i][0]=0;

                // for col
                if(j!=0)
                {
                    arr[0][j]=0;
                }
                else
                {
                    col0=0;
                }
            }
            
        }
        
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(arr[i][j]==1)
            {
                if(arr[0][j]==0 || arr[i][0]==0)
                {
                    arr[i][j]=0;
                }
            }
        }
        
    }

    // now for the first element of every row and every column 

    if(arr[0][0] ==0)
    {
        for (int i = 0; i < m; i++)
        {
            arr[0][i]=0;
        }
        
    }
    if(col0==0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i][0]=0;
        }
        
    }
    
    
}

int main()
{
    


return 0;
}