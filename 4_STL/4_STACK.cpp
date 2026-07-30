/*     Function	Purpose          	Complexity
       push()	Insert element	    O(1)
       pop()	Remove top	        O(1)
       top()	Access top	        O(1)
       empty()	Check empty	        O(1)
       size()	Number of elements	O(1)
*/

// A stack works on the LIFO (Last In, First Out) principle.



#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    
    st.push(10);
    st.push(30);
    st.push(40);
    // {40,30,20}
    cout<<st.size();
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();     // {30,20}
        
    }
  


return 0;
}