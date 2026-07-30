#include <bits/stdc++.h>

using namespace std;

void parameterize(int i,int j=0)
{
    if(i==0)
    {
        cout<<"sum  ="<<j<<endl;
    }
    parameterize(i-1,j+i);
}

int func_sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n+ func_sum(n-1);
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n* fact(n-1);
}
int main()
{
    // parameterize(6);
    cout<<func_sum(6)<<endl;
    cout<<fact(5)<<endl;


return 0;
}