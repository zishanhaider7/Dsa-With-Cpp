#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
     
    for (int i = 0; i < n; i++)
    {   cout<<"enter the vaue of "<<i+1<<"  array"<<endl;
        cin>>arr[i];
    
    }
    
    int hashh[n]={0};
    // pre hashing
    
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]]++;
    }
    
    int q;
    cout<<"enter how  many value you wnat to check "<<endl;
    cin>>q;
    
    while (q--)
    {   
        int number;
        cout<<"enter number"<<endl;
        cin>>number;
    
      cout<< number<<"appear"<<hashh[number]<<endl; 
    }
    

    

return 0;
}