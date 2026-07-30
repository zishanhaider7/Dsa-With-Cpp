#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> us;
    us.insert(20);
    us.insert(10);
    us.insert(30);
    us.insert(40);

    auto it = us.begin();
    while(it != us.end())
    {
        cout<<*it<<endl;
        it++;
    }

return 0;
}