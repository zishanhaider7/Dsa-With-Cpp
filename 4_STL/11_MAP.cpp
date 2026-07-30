#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,string>mp;

    mp[1]="zishan";
    // mp.insert({1,"zishan"});
    mp[19]="aliza";
    mp[2]="aafiya";
    
    // cout<<mp[1];
    for(auto it : mp)
    {
        cout<<it.first << " " <<it.second<<endl;
    }

return 0;
}