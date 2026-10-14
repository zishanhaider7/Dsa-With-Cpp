#include <bits/stdc++.h>

using namespace std;

int min_day(vector<int> &arr)
{
    int n = arr.size();
    int minn = arr[0];
    for (int i = 1; i < n; i++)
    {
        minn = min(minn, arr[i]);
    }

    return minn;
}
int max_day(vector<int> &arr)
{
    int n = arr.size();
    int maxx = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
    }
    return maxx;
}
int brute(vector<int> &arr, int m, int k)
{
    int n = arr.size();
    int minn = min_day(arr);
    int maxx = max_day(arr);

    while (minn <= maxx)
    {
        int cnt = 0;
        int bqt = 0;

        for (int i = 0; i < n; i++)
        {
            if (minn >= arr[i])
            {
                cnt++;
                if (cnt == k)
                {
                    bqt += 1;
                    cnt = 0;
                }
            }
            else
                cnt = 0;
        }

        if (bqt >= m)
            return minn;
        minn++;
    }
    return -1;
}

int total_bqt_that_day(vector<int> &arr, int day, int k)
{
    int n = arr.size();
    int cnt = 0;
    int bqt = 0;
    for (int i = 0; i < n; i++)
    {
        if (day >= arr[i])
            cnt++;
        else
        {
            bqt += cnt / k;
            cnt = 0;
        }
    }
    bqt += cnt / k;
    return bqt;
}

int optimal(vector<int> &arr, int m, int k)
{
    int n = arr.size();
    int low = min_day(arr);
    int high = max_day(arr);
    int minimum_day;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        // if that day buquet is full or exceed it means right side also exceed so eliminate the right side
        if (total_bqt_that_day(arr, mid, k) >= m)
        {
            minimum_day = mid;
            high = mid - 1;
        }

        // if thta day buqet is low it means before that day buqet will alo low so eliminate the left side
        else
        {
            low = mid + 1;
        }
    }

    return minimum_day;
}

int main()
{

    return 0;
}