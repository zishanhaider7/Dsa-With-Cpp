#include <bits/stdc++.h>

using namespace std;

int optimal(vector<int> &arr, int k)
{
    int n= arr.size();
    map<int,int> mpp;
    int xr=0;
    mpp[xr]++;
    int cnt =0;
    for (int i = 0; i < n; i++)
    {
        xr =xr^arr[i];
        
        int x=xr^k;   // this is the required or previous value we want 

        // if that value is present in the hash map then its mean we  got the k(target) as a subarray and we increse the cnt
        if(mpp.find(x) != mpp.end())
        {
            cnt+=mpp[x];
        }

        // or if it is not present then we will put it in the mappp.
        mpp[xr]++;
    }
    return cnt;
    
}
int main()
{


return 0;
}