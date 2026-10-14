#include <bits/stdc++.h>

using namespace std;

void brute(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int maxx=-1;
    int index=-1;
    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = 0; j < m; j++)
        {
            cnt += arr[i][j];

        }
        if(cnt>maxx)
        {
            maxx=cnt;
            index=i;
        } 
        
    }
    cout<<"maximum 1s is  "<<maxx<<"  in row no="<<index+1<<endl;

    
}


int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if(arr[mid] >= x) {
            ans = mid;
            // look for more small index on left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look for right
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int maxx = 0;
    int index = -1;
    for(int i = 0; i < n; i++) {
        int cnt = m - lowerBound(matrix[i], m, 1);
        if(cnt > maxx) {
            maxx = cnt;
            index = i;
        }
    }
    return index;
}

int main()
{

    return 0;
}