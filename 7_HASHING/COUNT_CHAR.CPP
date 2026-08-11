#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st="agjoiernnfcdd";

    // pre calculating
    
    int hashh[26]={0};

    for (int i = 0; i < 26; i++)
    {
        hashh[st[i] -'a']++;

    }


    // searching
    char n;
    
    for (int i = 0; i < 26; i++)
    {   
        cout<<"enter which char you want to search"<<endl;
        cin>>n;

        cout<<n<<"  appear  "<<hashh[n-'a']<<" time"<<endl;
    }

return 0;
}