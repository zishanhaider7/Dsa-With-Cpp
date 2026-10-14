#include <bits/stdc++.h>

using namespace std;

int optimal(int n)
{
    int low=1;
    int high=n;
    int ans;
    while(low<=high)
    {
        int mid=(low+high)/2;


        // if mid*mid <=n 

        if(1LL * mid * mid <= n)
        {
            ans=mid;
            low=mid+1;
        }

        // if mid*mid >=n
        else high=mid-1;
        
    }

    // at the end high will be pointing to the answer so either we can return the high or the ans
    return ans;
}
int main()
{


return 0;
}