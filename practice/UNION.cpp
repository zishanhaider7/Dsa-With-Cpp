#include <bits/stdc++.h>

using namespace std;

vector<int> unionn(int arr1[],int arr2[],int n1,int n2)
{
    set<int>ans;
    for (int i = 0; i < n1; i++)
    {
        ans.insert(arr1[i]);   
    }
    for (int i = 0; i < n2; i++)
    {
        ans.insert(arr2[i]);
    }

    vector<int>temp;
    for(auto it:ans)
    {
        temp.push_back(it);
    }
    return temp;
    
}

vector<int> optimal(vector<int>&arr1 ,vector<int>&arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> union_array;
    
    int i=0;
    int j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            if (union_array.back() != arr1[i] || union_array.size()==0)
            {
                union_array.push_back(arr1[i]);
            }
            i++;
            
        }

        else{
            if(union_array.back() != arr2[j] || union_array.size()==0)
            {
                union_array.push_back(arr2[j]);
            }
            j++;
        }
    }

    // now if anhy one array get finished first then we have to do this code 

    while (i<n1)
    {
        union_array.push_back(arr1[i]);
        i++;
    }
    
    while (j<n2)
    {
        union_array.push_back(arr2[j]);
        j++;
    }

    return union_array;
    
}
int main()
{


return 0;
}