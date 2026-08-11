#include <bits/stdc++.h>

using namespace std;

void reverse(int i,int arr[],int n)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);   
}

int main()
{
    // int i=0;
    int n=5;
    int arr[]={3,5,2,1,3};
    reverse(0,arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    


return 0;
}