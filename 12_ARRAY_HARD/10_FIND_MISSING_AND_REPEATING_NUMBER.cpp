#include <bits/stdc++.h>

using namespace std;

vector<int> brute(vector<int>& arr)
{
    int n = arr.size();
    int repeating=-1;
    int missing=-1;
    
    for (int i = 1; i <= n; i++)
    {
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==i)
            {
                cnt++;
            }
        }
        if(cnt==0) missing=i;
        else if(cnt==2) repeating=i;
        
    }
    return {missing,repeating};
    
}

vector<int> better(vector<int>& arr)
{
    int missing=-1;
    int repeating=-1;

    int n = arr.size();
    int hasharr[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        hasharr[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if(hasharr[i]==0)       missing=i;
        else if(hasharr[i]==2)  repeating =i;
    }
    return {missing,repeating};
    
    
}

vector<int> optimal(vector<int>& arr)
{
    int n = arr.size();
    // we have to find two equation eq1,eq2

    // we need  S(which is sum of given element in array) Sn(which is sum of size of n natural number in array) to form -- Equation 1

    long S =0;
    for (int i = 0; i < n; i++)
    {
        S+=arr[i];
    }

    long long Sn= (1LL*n*(n+1))/2;

    long long Eq_1= S-Sn;


    //  now we have to make equation two ;
    // S2  (which is sum of square in given element in array)
    // S2n (whih is sum of square of n natural number )

    long long S2=0;
    for (int i = 0; i < n; i++)
    {
        S2+=1LL*arr[i]*arr[i];
    }

    long long S2n=1LL*n*(n+1)*(2*n+1)/6;

    long long Eq_2=S2-S2n;
    
    long long Eq_3= Eq_2/Eq_1;
    
    int x=(Eq_1+Eq_3)/2;

    int y=x-Eq_1;

    return {int(x),int(y)};

    
}
int main()
{


return 0;
}