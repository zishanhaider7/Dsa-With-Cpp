#include <bits/stdc++.h>

using namespace std;
void brute(int arr[],int n)
{
    set<int>st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it: st)
    {
        arr[index]=it;
        index++;
    }

    for (int i = 0; i < st.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    


    
}

int optiomal(int arr[],int n)
{
    int i=0;
    for (int j = 1; j < n; j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
    
}
int main()
{
    int n=5;
    int arr[n]={2,4,4,8,9};
    brute(arr,n);
    cout<<endl;
    int opt=optiomal(arr,n);
    cout<<"size is"<<opt<<endl;
    


return 0;
}