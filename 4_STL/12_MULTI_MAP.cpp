// Difference between map and multimap
// Feature	map	multimap
// Duplicate Keys	❌ No	✅ Yes
// Duplicate Values	✅ Yes	✅ Yes
// Sorted by Key	✅ Yes	✅ Yes

#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap<int,string> mmp;
    // mmp[1] = "jonathan";    // not allowed
    mmp.insert({1,"jonathan"}); 
    mmp.insert({1,"jelly"}); 
    mmp.insert({2,"stanger"}); 

    for(auto it : mmp){
        cout<< it.first<< " "<< it.second<<endl;
    }

    cout<<"this key is repeated "<<mmp.count(1)<< "time"<<endl;

return 0;
}