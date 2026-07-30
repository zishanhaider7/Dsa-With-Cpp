#include <iostream>

using namespace std;

void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
{
    int  min =i;
    for (int j = i; j < n; j++)
    {
         if(arr[min]>arr[j])
        {
            min=j;
        }
    }
    int temp =arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    
}
cout<<"array is sorted now"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
}
void bubble_sort(int arr[],int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        int didswap=0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                didswap=1;
            }
            
        }
        if(didswap==0){
            break;
        }
        cout<<"run";

    }

    // sorted complete
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


}
void insertion_sort(int arr[],int n)
{

}

int main()

{

    int n;
    cout<<"enter the size of array here"<<endl;
    cin >> n;
    int arr[n];
    
    cout<<"enter the array here"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    bubble_sort(arr,n);
    
    return 0;
}