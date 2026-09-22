#include <bits/stdc++.h>

using namespace std;
int gcd(int a,int b)
{
    for (int i = 1; i < min(a,b); i++)
    {
       
        if(a>b) a=a%b;
        else b=b%a;

    }
    if(a==0) return b;
    return a;

    
}
int main()
{
    
int a,b;
cout<<"enter the number";
cin>>a>>b;
cout<<gcd(a,b)<<endl;


return 0;
}