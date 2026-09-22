#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n=371;
    int original =n;
    int sum =0;
    while(n!=0)
    {
        int rem =n%10;
        sum +=(rem*rem*rem) ;
        n=n/10;
    }

    if(original==sum)
    {
        cout<<"its an armstrong number"<<endl;
    }
    else{
        cout<<"not an armstrong number"<<endl;
    }
    


return 0;
}