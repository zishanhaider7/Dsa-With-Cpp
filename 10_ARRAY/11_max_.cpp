#include <bits/stdc++.h>

using namespace std;
int  max_consecutive(int arr[],int n)
{
    int maxi=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else
        {
            cnt=0;

        }
    }
    return  maxi;
    
}

int main()
{
    int arr[]={1,1,1,1,0,0,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);

    int ans=max_consecutive(arr,n);
    cout<<" max consecututive is "<<ans<<endl;    
    

return 0;
}
