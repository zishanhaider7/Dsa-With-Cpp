#include <bits/stdc++.h>

using namespace std;

void right(vector<int>&a,int d)
{
    int n=a.size();
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(a[i]);
    }

    for (int i = d; i < n; i++)
    {
        a[i-d]=a[i];
    }
    for (int i = d+1; i <n ; i++)
    {
        a[i]=temp[i-(d+1)];
    }
    
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    
    
}

int main()
{
    vector<int> vec={1,2,3,4,5,6,7};
    right(vec,3);


return 0;
}