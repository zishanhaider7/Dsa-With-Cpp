#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st="AAAbbbaaaHHH";

    int hashh[256]={0};

    // pree hashing
    for (int i = 0; i < 256; i++)
    {
        hashh[st[i]]++;
    }

    // search now
    int q;
    cout<<"enter how many time u are going to search "<<endl;
    cin>>q;
    char c;
    while(q--)
    {
        cout<<"enter the character you want to search "<<endl;
        cin>>c;

        cout<<c<<" appear "<<hashh[c]<<"times"<<endl;
    }
    


return 0;
}