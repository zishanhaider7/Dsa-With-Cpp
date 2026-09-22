#include <bits/stdc++.h>

using namespace std;

int brute(vector<int> &arr)
{
    int n = arr.size();
    int maxproduct = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int product = 1;
            for (int k = i; k < j; k++)
            {
                product *= arr[k];
            }

            maxproduct = max(maxproduct, product);
        }
    }
    return maxproduct;
}

int better(vector<int> &arr)
{
    int n = arr.size();
    int maxproduct = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i; j < n; j++)
        {
            product *= arr[i];
        }
        maxproduct=max(product,maxproduct);
    }
    return maxproduct;
}

int optimal(vector<int> &arr)
{
    int n=arr.size();
    int prefix=1;
    int suffix=1;
    int maxii;
    for (int i = 0; i < n; i++)
    {
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix *= arr[i];
        suffix *= arr[n-i-1];
        maxii=max(maxii,max(prefix,suffix));
    }
    return maxii;
    
}

int main()
{

    return 0;
}