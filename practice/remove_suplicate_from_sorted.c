#include <stdio.h>

int duplicate(int arr[],int n)
{
    int harshujod[n];
    int j=0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            harshujod[j]=arr[i];
            j++;
        }
    }
    harshujod[j]=arr[n-1];
    j++;

    for (int i = 0; i < j; i++)
    {
        printf("%d  ",harshujod[i]);
        
    }
    
    
}
int opitmal(int arr[],int n)
{
    
    int current=0;
    for (int next = 1; next <  n; next++)
    {
        if(arr[current] !=arr[next])
        {
            arr[current+1]=arr[next];
            current++;
        }
    }
    return current+1;
    
}
int main()
{

    int arr[10]={1,1,1,1,2,2,3,4,5,5};
    duplicate(arr,10);



return 0;
}