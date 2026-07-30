#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);

    // ms.erase(10);         // it delete the all element
    ms.erase(ms.find(10));   // it delete the one iteration of the element
    auto it = ms.begin();
    
    
    while(it != ms.end())
    {
        cout<<*it<<endl;
        it++;
    }

return 0;
}