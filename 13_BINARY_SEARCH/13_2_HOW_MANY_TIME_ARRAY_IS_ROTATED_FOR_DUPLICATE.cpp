#include <bits/stdc++.h>

using namespace std;


int optimal(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int minn = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[low]==arr[mid] && arr[mid]==arr[high])
        {
            low++;
            high--;
            continue;
        }

        // if entire array is sorted you can find arr[low] is minimum
        if (arr[low] <= arr[mid] && arr[mid] <= arr[high])
        {
            if (arr[low] < minn)
            {
                minn = arr[low];
                index = low;
            }
            break;
        }

        // if left side is sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < minn)
            {
                minn = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        //  if right side is sorted
        else
        {
            if (arr[mid] < minn)
            {
                minn = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}
int main()
{


return 0;
}