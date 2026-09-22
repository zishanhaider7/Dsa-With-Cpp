#include <bits/stdc++.h>
using namespace std;

void rotated(vector<int>& arr,int d)
{
    int n=arr.size();
    d=d%n;

    vector<int> temp;

    // for storing element which are going to rotate
    for(int i=0;i<d;i++)
    {
        temp.push_back(arr[i]);
    }

    // to shift the element in left position
    int j=0;
    for(int i=d;i<n;i++)
    {
        arr[j]=arr[i];
        j++;
    }

    // againg fill the lement in the back so they will rotate
    int k=0;
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[k];
        k++;
    }


    for(int i=0;i<n;i++)
    {
        cout<<"  "<<arr[i];
    }
}

vector<int> left_rotate(int arr[],int n,int d)
{
   
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

vector<int> right_rotate(int arr[],int n,int d)
{
   
    d=d%n;
    reverse(arr,arr+(n-d));
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+n);
}


void reversee(int arr[],int start, int end)
{
    while (start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;


    }
    
}
int main() 
{
    cout << "Hello, World!";
    vector<int> arr={1,2,3,4,5,6,7,8,9,10,11,12,13};
    rotated(arr,3);

    return 0;
}