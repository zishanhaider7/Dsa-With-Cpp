#include <bits/stdc++.h>

using namespace std;
int once(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt =0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt==1) return arr[i];
    }
    return -1;
}

int main()
{
    
    int arr[5]={1,1,2,2,3};
    int n=5;
    int ans=once(arr,n);
    cout<<"the element which appear once is "<<ans<<endl;

return 0;
}