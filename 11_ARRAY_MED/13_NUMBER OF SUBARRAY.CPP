#include <bits/stdc++.h>

using namespace std;

int optimal(vector<int> &arr, int k)
{
    int presum = 0;
    int cnt = 0;

    unordered_map<int, int> mpp;
    mpp[0] = 1;

    int n = mpp.size();

    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        if (mpp.find(presum - k) != mpp.end())
        {
            // it add how many time that sum came in the hash / map
            cnt += mpp[presum - k];
        }

        mpp[presum]++; // it add the every presum in the hash / map
    }
    return cnt;
}

int main()
{

    return 0;
}