#include <bits/stdc++.h>

using namespace std;

void brute(int arr[],int n)
{
    vector<int>temp;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] !=0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nonzero=temp.size();

    for (int i = 0; i < nonzero; i++)
    {
        arr[i]=temp[i];
    }

    for (int i = nonzero; i < n; i++)
    {
        arr[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
       cout<<" "<<arr[i];
    }
    cout<<endl;
 
}

void optimal(int arr[],int n)
{
    int j=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    for (int i = j+1; i < n; i++)
    {
        if(arr[i] !=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    
}

int main()
{
    int arr[10]={2,0,1,0,5,0,3,0,9,8};
    
    // brute(arr,10);
    optimal(arr,10);

    


return 0;
}