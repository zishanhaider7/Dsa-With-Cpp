#include <bits/stdc++.h>

using namespace std;

int maxx(vector<int> &arr)
{
    int n=arr.size();
    int largest=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}

int main()
{


return 0;
}