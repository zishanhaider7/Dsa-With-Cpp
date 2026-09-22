#include <bits/stdc++.h>

using namespace std;

//  Time complexity  = O(n*n)
//  Space complexity = O(1) 
int brute(vector<int> & arr)
{
    int n = arr.size();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                cnt++;
            }
        }
        
    }
    return cnt;
}




int main()
{


return 0;
}