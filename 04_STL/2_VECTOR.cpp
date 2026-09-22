#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(3,100);   // {100,100,100}
    v.push_back(3);         // {100,100,100,3}
    cout<<endl; 

    // vector<int>::iterator it=v.begin();
    // v.erase(it+1,it+4);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout<<*i<<" ";
    }

    // cout<<v.back()<<endl;

    
    // cout<<*v.begin()<<endl;


return 0;
}