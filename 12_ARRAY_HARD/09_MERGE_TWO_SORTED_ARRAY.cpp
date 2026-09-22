#include <bits/stdc++.h>

using namespace std;

void brute(int arr1[], int n1, int arr2[], int n2)
{
    int left = 0;
    int right = 0;
    int arr3[n1 + n2];
    int index = 0;
    while (left < n1 && right < n2)
    {

        if (arr1[left] < arr2[right])
        {
            arr3[index] = arr1[left];
            left++;
            index++;
        }

        else
        {
            arr3[index] = arr2[right];
            right++;
            index++;
        }
    }

    while (left < n1)
    {
        arr3[index] = arr1[left];
        left++;
        index++;
    }

    while (right < n2)
    {
        arr3[index] = arr2[right];
        right++;
        index++;
    }

    for (int i = 0; i < n1 + n2; i++)
    {
        if (n1 > i)
            arr1[i] = arr3[i];
        else
        {
            arr2[i - n1] = arr3[i];
        }
    }
}

void better(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int left = n1 - 1;
    int right = 0;

    for (int i = 0; i < n1 + n2; i++)
    {

        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else
            break;
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

void optimal(int arr1[], int n1, int arr2[], int n2)
{
    int gap = (n1 + n2) / 2 + 1;
    while (gap > 0)
    {
        int left = 0;
        int right = gap;
        while (right < (n1 + n2))
        {
            // if both element are in arr1
            if (left < n1 && right < n1)
            {
                if (arr1[left] > arr1[right])
                {
                    swap(arr1[left],arr1[right]);
                }
            }
            // if both element is int arr1 and arr2
            else if(left<n1 && right>=n1)
            {
                if(arr1[left]>arr2[right-n1])
                {
                    swap(arr1[left],arr2[right-n1]);
                }
            }
            //  both are in arrr2
            else
            {
                if(arr2[left-n1]>arr2[right-n1])
                {
                    swap(arr2[left-n1],arr2[right-n1]);
                }
            }
            right++;
            left++;
        }

        if (gap == 1)
        {
            break;
        }
        gap = (gap +1) /2;
    }
}

int main()
{

    return 0;
}