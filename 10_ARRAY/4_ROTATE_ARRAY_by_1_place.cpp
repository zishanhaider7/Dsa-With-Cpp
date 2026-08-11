#include <bits/stdc++.h>

using namespace std;

vector<int> rotate(vector<int> arr)
{
    int temp=arr[0];
    int n=arr.size();
    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;

}

int rotate_by_d(int arr[],int n)
{
    int d=2;
    int temp[2]={1,2};
    for (int i = d; i < n; i++)
    {
        arr[i-d]=arr[i];
    }

    int j=0;
    for (int i =n-d; i < n; i++)
    {
        arr[i]=temp[j];
        j++;
    }
    

    
}
int main()
{
    vector<int> arr={3,4,5,6,7};
    cout<<"after roataing by one array is "<<endl;
    rotate(arr);
    
 


return 0;
}