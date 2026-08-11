#include <bits/stdc++.h>

using namespace std;

void Slargest(int arr[],int n)
{
    int largest =arr[0];
    int slargest =-1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
    }
    cout<<"second largest is"<<slargest<<endl;
    
}


void Sminimum(int arr[],int n)
{
    int minimum =arr[0];
    int sminimum =INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<minimum)
        {
            sminimum=minimum;
            minimum=arr[i];
        }
        else if(arr[i]>minimum && arr[i]<sminimum)
        {
            sminimum=arr[i];
        }
    }
    cout<<"second minimum is"<<sminimum<<endl;
    
}



int main()
{
    int n=10;
    int arr[n]={4,3,2,1,5,6,4,7,9,8};
    // Slargest(arr,n);
    Sminimum(arr,n);



return 0;
}