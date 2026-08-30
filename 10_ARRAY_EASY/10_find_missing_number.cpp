#include <bits/stdc++.h>

using namespace std;

int brute(int arr[],int n)
{
    for (int i = 1; i <= n; i++)
    {
        int flag=0;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) return i;
        
    }
    
    return -1;
}

int better(int arr[],int n)
{
    int hash[n+1]={0};
    for (int  i = 0; i < n; i++)
    {
        hash[arr[i]]=1;
    }

    // checking hashing whihc number is not preseent in its index
    for (int i = 1; i <= n; i++)
    {
        if(hash[i]==0) return i;
    }


    return -1;
    
}

int optimal_sum(int arr[],int n)
{
    int sum=n*(n+1)/2;
    int newsum=0;
    for (int i = 0; i < n; i++)
    {
        newsum+=arr[i];
    }

    int missing =sum-newsum;
    return missing;
    
}

int optimal_xor(int arr[],int n)
{
    int xor1=0;
    int xor2=0;
    for (int i = 0; i < n-1; i++)
    {
        xor1=xor1^(1+i);
        xor2=xor2^arr[i];
    }
    xor1=xor1^n;
    return xor1^xor2;
    
}
int main()
{
    int n=5;
    int arr[]={1,2,3,5};
    // int ans=brute(arr,n);
    // int ans=better(arr,n);
    int ans=optimal_sum(arr,n);
    cout<<" "<<ans<<endl;



return 0;
}