#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue <int> pq;  // work on FIFO  and greatest element at the top

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout<<"greatest element ="<<pq.top()<<endl;

    priority_queue<int, vector<int> , greater<int >> minpq;  // work on FIFO  and minimum element at the top

    minpq.push(10);
    minpq.push(20);
    minpq.push(30);
    minpq.push(40);
    cout<<"minimum element ="<<minpq.top()<<endl;

return 0;
}