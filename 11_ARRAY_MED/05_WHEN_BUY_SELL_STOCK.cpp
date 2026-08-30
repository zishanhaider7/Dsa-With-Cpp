#include <bits/stdc++.h>

using namespace std;

int stock(int prices[],int n)
{
    int cost=prices[0];
    int maxprofit=0;
    for (int i = 0; i < n; i++)
    {
        int profit=prices[i]-cost;
        maxprofit=max(maxprofit,profit);
        cost=min(cost,prices[i]);

    }
    return maxprofit;
    
}

int main()
{
    


return 0;
}