#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,string>ump;

    ump.insert({1,"zishan"});
    ump.insert({2,"striver"});
    ump.insert({4,"jonathan"});
    ump.insert({5,"spower"});

    ump.erase(1);

    for(auto it : ump)
    {
        cout<<it.first <<" "<<it.second<<endl;
    }

return 0;
}