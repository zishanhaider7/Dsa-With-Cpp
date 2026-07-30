#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    set<int> s = {10, 20, 30, 40, 50};
    
    //  lower bound first find  X<= element

    s.lower_bound(30);   // -> 30
    s.lower_bound(25);   // -> 30
    s.lower_bound(60);   // -> s.end()
    
    
    //  upper bound first find  X< element

    s.upper_bound(30);   // -> 40
    s.upper_bound(25);   // -> 30
    s.upper_bound(50);   // -> s.end()
    return 0;
 }