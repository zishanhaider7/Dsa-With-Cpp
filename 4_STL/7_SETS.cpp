#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(40);
    s.insert(20);
    s.insert(30);

    auto it =s.find(10);
    auto it2 = s.find(30);
    s.erase(it,it2);
    for ( auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    // cout<<*it<<endl;





return 0;
}