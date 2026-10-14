#include <bits/stdc++.h>

using namespace std;

long double brute(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> howMany(n - 1, 0);
    for (int gasStations = 1; gasStations <= k; gasStations++)
    {
        long double maxSection = -1;
        int maxInd = -1;
        for (int i = 0; i < n - 1; i++)
        {
            long double diff = (arr[i + 1] - arr[i]);
            long double sectionLengtj = diff / (long double)(howMany[i] + 1);
            if (sectionLengtj > maxSection)
            {
                maxSection = sectionLengtj;
                maxInd = i;
            }
        }
        howMany[maxInd]++;
    }
    long double maxAns = -1;
    for (int i = 0; i < n - 1; i++)
    {
        long double diff = (arr[i + 1] - arr[i]);
        long double sectionLengtj = diff / (long double)(howMany[i] + 1);
        maxAns = max(maxAns, sectionLengtj);
    }
    return maxAns;
}

long double pq_method(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> how_many(n - 1, 0);
    priority_queue<pair<long double, int>> pqq;
    for (int i = 0; i < n - 1; i++)
    {
        pqq.push({(long double)(arr[i + 1] - arr[i]), i});
    }
    for (int gasStation = 1; gasStation <= k; gasStation++)
    {
        auto tp = pqq.top();
        pqq.pop();

        int section_index = tp.second;
        how_many[section_index]++;
        long double ini_differnece = arr[section_index + 1] - arr[section_index];
        long double new_difference = ini_differnece / (long double)(how_many[section_index] + 1);

        pqq.push({new_difference, section_index});
    }
    return pqq.top().first;
}




int numberOfGasStationsRequired(long double dist, vector<int> &arr) {
    int cnt = 0;
    for(int i = 1; i<arr.size(); i++) {
        int numberInBetween = ((arr[i] - arr[i-1]) / dist);

        // nwo we check is the number is pure divisible if yes then we remove one from it by this if condition
        if((arr[i] - arr[i-1]) / dist == numberInBetween * dist) {
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}
long double optimal(vector<int> &arr, int k){
    int n = arr.size();
    long double low = 0;
    long double high = 0;
    for(int i = 0; i<n-1; i++) {
        high = max(high, (long double)(arr[i+1] - arr[i]));
    }
    
    long double diff = 1e-6 ;
    while(high - low > diff) {
        long double mid = (low + high) / (2.0);
        int cnt = numberOfGasStationsRequired(mid, arr);
        if(cnt > k) {
            low = mid;
        }
        else {
            high = mid;
        }
    }
    return high;
}




int main()
{

    return 0;
}