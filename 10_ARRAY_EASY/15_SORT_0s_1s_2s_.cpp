#include <bits/stdc++.h>

using namespace std;
void better(int arr[],int n)
{
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0) cnt0++;
        else if(arr[i]==1) cnt1++;
        else  cnt2++;


    }
    cout<<cnt0<<"  "<<cnt1<<"  "<<cnt2<<endl;

    for (int i = 0; i < cnt0; i++)
    {
        arr[i]=0;
    }

    for (int i = cnt0; i < (cnt0+cnt1); i++)
    {
        arr[i]=1;
    }

    for (int i = (cnt0+cnt1); i < n; i++)
    {
        arr[i]=2;
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];

    }
    
    
}

void optimal(int arr[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }

        else if(arr[mid]==1)
        {
            mid++;
        }

        else
        {
            swap(arr[mid],arr[high]);
            high--;

        }
    }
    
}
int main()
{
    int arr[10]={0,1,0,1,2,2,0,1,2,0};
    int n=10;

    better(arr,n);

return 0;
}

