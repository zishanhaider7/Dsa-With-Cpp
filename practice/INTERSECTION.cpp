#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int>&arr1,vector<int>&arr2)
{
    int n1=arr1.size();
    int n2 = arr2.size();

    vector<int> intersection;
    int i=0;
    int j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]==arr2[j])
        {
            if(   intersection.size()==0 || intersection.back() != arr1[i])
            {
                intersection.push_back(arr1[i]);
            }
            i++;
            j++;
        }

        else if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;

    }

    return intersection;
}
int main()
{


return 0;
}