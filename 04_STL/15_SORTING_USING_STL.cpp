#include <bits/stdc++.h>

using namespace std;

int main()
{
//     string s="123";
//     sort(s.begin(),s.end());
//     do{
//         cout<<s<<endl;
// }while(next_permutation(s.begin(),s.end()));




    int arr[]={4,3,5,6,7,4};
    int n=6;

    // sort(arr,arr+6);
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
return 0;
}