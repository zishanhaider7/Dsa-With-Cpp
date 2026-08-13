#include <bits/stdc++.h>

using namespace std;
int once_brute(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt =0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt==1) return arr[i];
    }
    return -1;
}
int once_better(int arr[],int n)
{
    map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second==1)
        {
            return it.first;
        }
    }
    return -1;
}
int once_optimal(int arr[],int n)
{
    int xOr=0;
    for (int  i = 0; i < n; i++)
    {
        xOr=xOr^arr[i];   
    }
    return xOr;
}

int main()
{
    
    int arr[5]={1,1,2,2,3};
    int n=5;
    // int ans=once_brute(arr,n);
    // int ans=once_better(arr,n);
    int ans=once_optimal(arr,n);
    cout<<"the element which appear once is "<<ans<<endl;

return 0;
} 