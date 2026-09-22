#include <stdio.h>

void issorted(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        
        if(arr[i]>arr[i+1])
        {
          printf("array is not sorted\n");  
          return; 
        }
       

    }
    printf("array is sorted\n");
    
    
    
}
int main()
{




return 0;
}