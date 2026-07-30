#include <stdio.h>

void bubble_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>arr[j+1])
            {   int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
        
    }
    
    
}

    int main(){
        int arr[]={2,4,1,3,1};
        int n=5;
        bubble_sort(arr,n);
    
return 0;
}