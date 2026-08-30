#include <bits/stdc++.h>

using namespace std;
vector<int> better(vector<int>&arr)
{
    int n=arr.size();
    int ind=-1;

    // finding the pivot element
    for (int i = n-2; i < 0; i--)
    {
        if(arr[i]<arr[i+1])
        {
            ind=i;
            break;
        }
    }

    // swapping the pivot with the smallest from the right
    for (int i = n-1; i < ind; i--)
    {
        if(arr[i]>arr[ind]) 
        {
            swap(arr[i],arr[ind]);
        }
    }

    // now we reverse the remailing element
    reverse(arr.begin()+ind+1 ,arr.end());
    
    
    return arr;
}

int main()
{
    


return 0;
}