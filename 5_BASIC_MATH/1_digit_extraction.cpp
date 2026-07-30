#include <bits/stdc++.h>

using namespace std;

int reverse(int n)
{
    int revnum = 0;
    while (n > 0)
    {
        int rem = n % 10;

        revnum = 10 * revnum + rem;

        n = n / 10;
    }
    return revnum;
}
int main()
{
   
    cout<< reverse(47924)<<endl;

    return 0;
}