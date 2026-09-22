#include <bits/stdc++.h>

using namespace std;

int main()
{

    pair<int ,int> p ={2,3};                      // pairing or integer
    pair<int,pair<int,int>> p2={4,{4,5}};         // nested pairing
    pair<int,int> arr[]={{3,2},{6,4},{4,7}};      // array pairing


    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.second.second<<endl;
    cout<<arr[2].second<<endl;
    return 0;
    
}