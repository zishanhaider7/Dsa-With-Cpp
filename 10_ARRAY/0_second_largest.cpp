#include <bits/stdc++.h>

using namespace std;

void sLargest(int arr[],int n)
{
    int largest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    int slargest=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
        }
    }
    cout<<"sesond largest element is"<<slargest<<endl;
    

    
}

int main()
{
    int n=9;
    int arr[n]={2,3,1,4,5,6,7,8,9};
    sLargest(arr,n);
    


return 0;
}