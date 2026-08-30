#include <bits/stdc++.h>

using namespace std;

int lenear(int arr[],int n,int num)
{
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==num)
        {
            return i;
            
        }
        // else cout<<"number not found"<<endl;
    
    }
    return -1;
    
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<lenear(arr,5,3);

    


return 0;
}