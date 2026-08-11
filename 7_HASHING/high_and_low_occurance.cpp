#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {3, 2, 4, 1, 1, 2, 2, 2, 6, 6};
    int n = 10;

    // pre hshing
    map<int, int> mp;
    for (int i = 0; i < 10; i++)
    {
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int maxelement = 0;

    
    // maximum
    for (auto it : mp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxelement = it.first;
        }
    }
    int minfreq=INT_MAX;
    int minelement=-1;

    for(auto it: mp)
    {
        if(it.second<minfreq)
        {
            minfreq=it.second;
            minelement=it.first;
        }
    }

    cout << " maxxx Element = " << maxelement << endl;
    cout << "maxxx frequency = " << maxFreq << endl;

    cout << "minnnn Element = " << minelement << endl;
    cout << "minnnn Frequency = " << minfreq<< endl;

    return 0;
}