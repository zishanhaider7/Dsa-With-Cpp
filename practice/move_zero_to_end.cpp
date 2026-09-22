#include <bits/stdc++.h>

using namespace std;

void brute(vector<int>&arr)
{
    int n= arr.size();
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        
        }

    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i]=temp[i];
    }

    for (int i = temp.size(); i < n; i++)
    {
        arr[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
}

void optimal(int arr[],int n)
{
    int j=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] !=0)
        {
            arr[j]=arr[i];
            j++;
        }
        else{
            cnt++;
        }
       
    }
    for (int i = 0; i < cnt; i++)
    {
        arr[n-i-1]=0;
    }


    
        for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }


    
}

void official(int arr[],int n)
{
    int j=-1;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1) return;
    
    for (int i = j+1; i < n; i++)
    {
        if(arr[i] !=0)
        {
            swap(arr[j],arr[i]);
            j++;
        }
    }
    
    
}
int main()
{

    // vector<int> arr={1,2,0,0,0,1,2,0,1,0};
    // brute(arr);

    int arr[10]={1,2,3,0,0,0,4,5,6,7};
    optimal(arr,10);

return 0;
}