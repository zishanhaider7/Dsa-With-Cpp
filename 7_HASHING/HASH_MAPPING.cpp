#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10]={2,1,3,4,4,2,99};

    // hash mapping
    map<int ,int> mpp;

    for (int i = 0; i < 10; i++)
    {
        mpp[arr[i]]++;

    }
    
    // searching
    int number;
    for (int i = 0; i < 10; i++)
    {
        cin>>number;

        cout<<number<<" appear "<<mpp[number]<<" times"<<endl;
    }
    


return 0;
}