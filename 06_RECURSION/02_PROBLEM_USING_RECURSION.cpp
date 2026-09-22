// 1. print name 5 time
// 2. print number 1 to n
// 3. print number n to 1
// 4. print number 1 to n by breakdown recursion 
// 5. print number n to 1 by breakdown recursion 

#include <bits/stdc++.h>

using namespace std;

int name=0;

void q1()
{
    if(name == 5)
    {
        return;
    }
    cout<<"zishan"<<endl;
    name++;
    q1();
}

void q2(int i,int n)
{
    if(i>n)
    {
        return;
    }

    cout<<i<<endl;
    q2(i+1,n);
    
}

void q3(int i,int n)
{
    if(i<n)
    {
        return;
    }
    cout<<i<<endl;
    
    q3(i-1,n);
}

void q4(int i,int n)
{
    if(i<1)
    {
        return;
    }
    q4(i-1,n);
    cout<<i<<endl;
}

void q5(int i,int n)
{
    if(i>n)
    {
        return;
    }
    q5(i+1,n);
    cout<<i<<endl;
}

int main()
{
    
// q1();
// q2(10);
// q3(10,1);
// q4(4,4);
q5(1,10);

return 0;
}