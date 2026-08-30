#include <bits/stdc++.h>

using namespace std;

bool check(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
        else return false;
    }
    return true;
    
}

int main()
{
    int n=5;
    int arr[]={2,4,4,6,7};

    int c=check(arr,n);
    cout<<"this array is"<<c<<endl;
    


return 0;
}