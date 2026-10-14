#include <bits/stdc++.h>

using namespace std;

double brute(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> sorted_array;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] > arr2[j])
            sorted_array.push_back(arr2[j++]);
        else
            sorted_array.push_back(arr1[i++]);
    }
    while (i < n1)
        sorted_array.push_back(arr1[i++]);
    while (j < n2)
        sorted_array.push_back(arr2[j++]);

    // now weget the sorted array of array 1 and 2 in third array

    int n3 = sorted_array.size();
    if (n3 % 2 == 1)
        return sorted_array[n3 / 2];
    if (n3 % 2 == 0)
        return (sorted_array[n3 / 2] + sorted_array[(n3 / 2) - 1]) / 2.0;
}

double better(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int cnt = 0;
    int i = 0;
    int j = 0;
    int n = n1 + n2;
    int el_ind_1 = n / 2;
    int el_ind_2 = el_ind_1 - 1;
    int el_1 = -1;
    int el_2 = -1;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (cnt == el_ind_1)
                el_1 = arr1[i];
            if (cnt == el_ind_2)
                el_2 = arr1[i];
            cnt++;
            i++;
        }
        else
        {
            if (cnt == el_ind_1)
                el_1 = arr2[j];
            if (cnt == el_ind_2)
                el_2 = arr2[j];
            cnt++;
            j++;
        }
    }

    while (i < n1)
    {

        if (cnt == el_ind_1)
            el_1 = arr1[i];
        if (cnt == el_ind_2)
            el_2 = arr1[i];
        cnt++;
        i++;
    }

    while (j < n2)
    {
        if (cnt == el_ind_1)
            el_1 = arr2[j];
        if (cnt == el_ind_2)
            el_2 = arr2[j];
        cnt++;
        j++;
    }

    if(n%2==0) return (el_1+el_2)/2.0;
    if(n%2==1) return el_1;

}



int main()
{

    return 0;
    
}