#include <bits/stdc++.h>

using namespace std;

void all_divisor(int n)
{
    vector<int> ls;
    for (int i = 1; i <= i*i<=n; i++)
    {
        if(n%i==0)
        {
            // cout<<i<<" ";
            ls.push_back(i);
            if(n/i !=i)
            {
                // cout<<n/i<<" ";
                ls.push_back(n/i);
            }
        }
        
    }
    sort(ls.begin(),ls.end());

    for(auto it : ls)
    {
        cout<<it<<" ";
    }
}
int main()
{
    int n=36;
    all_divisor(n);

    


return 0;
}