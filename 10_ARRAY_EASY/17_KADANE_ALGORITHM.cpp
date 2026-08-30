#include <bits/stdc++.h>

using namespace std;


int brute(int arr[],int n)
{
    int maxx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k < j; k++)
            {
                sum+=arr[k];
                maxx=max(sum,maxx);
            }
            
        }
        
    }
    return maxx;

    
}

int better(int arr[],int n)
{
    int maxx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
                sum+=arr[j];
                maxx=max(sum,maxx); 
        }
        
    }
    return maxx;
}

int optimal(int arr[],int n)
{
    long long sum=0;
    long long maxx=LONG_LONG_MIN;
    int start,end;
    for (int i = 0; i < n; i++)
    {
        if(sum==0) start=i;
        sum+=arr[i];
        if(sum>maxx)
        {
            maxx=sum;
            end=i;
        }

        if(sum<0) sum=0;
        
        
    }
    return maxx;
    
}

int main()
{
    


return 0;
}