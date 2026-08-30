#include <bits/stdc++.h>

using namespace std;
vector<int> brute(vector<int>a1,vector<int>a2)
{
    set<int> st;

    for (int i = 0; i < a1.size(); i++)
    {
        st.insert(a1[i]);
    }


    for (int i = 0; i < a2.size(); i++)
    {
        st.insert(a2[i]);
    }

    vector<int> vec;
    for(auto it: st)
    {
        vec.push_back(it);
    }

    return vec;
    

    
}

vector<int> optimal(vector<int>a1,vector<int>a2)
{
    int n1=a1.size();
    int n2=a2.size();

    int i=0;
    int j=0;

    vector<int>arr;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            if(arr.size()==0 || arr.back() != a1[i] )
            {
                arr.push_back(a1[i]);
            }
            i++;
        }
        else
        {
            if( arr.size()==0 || arr.back() != a2[j])
            {
                arr.push_back(a2[j]);
            }
            j++;
        }
    }


    while(i<n1)
    {
        if( arr.size()==0 || arr.back() != a1[i] )
        {
            arr.push_back(a1[i]);
        }
        i++;
    }

    while(j<n2)
    {
        if( arr.size()==0 || arr.back() != a2[j])
        {
            arr.push_back(a2[j]);
        }
        j++;
    }

    return arr;

}
int main()
{
    


return 0;
}