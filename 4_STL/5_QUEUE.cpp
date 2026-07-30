#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> qe;    // queue work on principle of FIFO ( first in first out)
    qe.push(10);
    qe.push(20);
    qe.push(30);
    qe.push(40);

    cout<<qe.back()<<endl;
    cout<<qe.front()<<endl;
    qe.pop();  // {20,30,40}  
    cout<<qe.front()<<endl;

    

    return 0;

}