#include <bits/stdc++.h>

using namespace std;

void selection(int arr[],int n)
{

    // int arr[n]={3,2,1,5};

for (int i = 0; i < n-1; i++)
{   int min=i;
    for (int j =i; j < n; j++)
    {
        if(arr[min]>arr[j]) min=j;
        
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    
}



for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}
}

void bubble(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int z=0;
        // int i=i;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                z=1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
            
        }
        if( z==0)
        {

         cout<<"loop end in "<<i<<"  iteration "<<endl;
         break;
        }
        
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
    
}

void insertion(int arr[],int n)
{
    for (int i = 1; i < n-1; i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j]= arr[j-1];
            arr[j-1]= temp;
            j--;
        }

    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
    
}

int main()

{
    int n=5;
    int arr[n]={1,5,2,9,3};
    insertion(arr,n);
    


return 0;
}