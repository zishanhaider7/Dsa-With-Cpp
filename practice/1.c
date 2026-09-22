#include <stdio.h>
#include <limits.h>


int secL(int arr[],int n)
{
    int largest=-1;
    int slargest=-2;

    // by this loop we will find the largest
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    // by this loop we will find the second largest 
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>slargest && arr[i] != largest)
        {
            slargest=arr[i];
        }
    }
    return slargest;
    
    
    
}

int optimal(int arr[],int n)
{
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest && arr[i] != largest)
        {
            slargest=arr[i];
        }
    }
    return slargest;
}
int small(int arr[],int n)
{
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if( arr[i]<ssmallest && arr[i] != smallest)
        {
            ssmallest=arr[i];
        }
    }
    return ssmallest;
    
}

int main()
{




return 0;
}