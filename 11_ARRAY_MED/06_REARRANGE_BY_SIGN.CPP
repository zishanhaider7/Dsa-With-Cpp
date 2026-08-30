#include <bits/stdc++.h>

using namespace std;

void brute(vector<int> &arr)
{
    int n=arr.size();
    vector<int>arr1;
    vector<int>arr2;

    for (int i = 0; i < n; i++)
    {
        
        if(arr[i]>0)
        {
            arr1.push_back(arr[i]);
        } 

        else if(arr[i]<0)
        {
            arr2.push_back(arr[i]);
        }  
        
    }
    
    for (int i = 0; i < n/2; i++)
    {
        arr[i*2]=arr1[i];
        arr[(i*2)+1]=arr2[i];
    }

    for(auto it:arr)
    {
        cout<<it<<" ";
    }
     
}

vector<int> optimal(vector<int>&arr)
{
    int n=arr.size();
    vector<int>ans(n);
    int poindex=0;
    int negindex=1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            ans[negindex]=arr[i];
            negindex+=2;
        }
        else
        {
            ans[poindex]=arr[i];
            poindex+=2;
        }
    }
    return ans;
}

vector<int> notequal(vector<int>arr)
{
    int n=arr.size();
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0) pos.push_back(arr[i]);

        else
        {
            neg.push_back(arr[i]);
        }
    }

    if(pos.size()>neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[i*2]=pos[i];
            arr[(i*2)+1]=neg[i];
        }

        int index=neg.size()*2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index]=pos[i];
            index++;
        }
        
        
    }


    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[i*2]=pos[i];
            arr[(i*2)+1]=neg[i];
        }

        int index=pos.size()*2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index]=neg[i];
            index++;
        }
    }
    return arr;
}



int main()
{
    vector<int> arr={1,2,3,4,-2,-4,-5,-6};
    brute(arr);

return 0;
}