#include <bits/stdc++.h>

using namespace std;

void brute(int arr[],int n,int k)
{
    int len =0;
    for (int i = 0; i < n; i++)
    {
        int sum =0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                len=max(len,j-i+1);
            }
        }
        
    }
    cout<<"lenght is "<<len<<endl;
    
}

void b2_brute(int arr[],int n,int k)
{
    int len =0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            if(sum==k) len=max(len,j-i+1);
        }
        
    }
        
}
int better(int )
{

}
int main()
{
    


return 0;
}