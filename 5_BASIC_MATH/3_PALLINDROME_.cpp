#include <bits/stdc++.h>

using namespace std;

int reverse(int n)
{
    int revnum = 0;
    while (n != 0)
    {
        int rem = n % 10;

        revnum = 10 * revnum + rem;

        n = n / 10;
    }
    return revnum;
}

int main()
{

  while(true){

      int n;
      cout << "enter the number you want to check pallindrome" << endl;
      cin >> n;
      
      int rev = reverse(n);
      cout<<rev<<endl;
      
      if (n == rev)
      {
          cout << "given number is pallindrome" << endl;
        }
        else
        {
            cout << "given number is not pallindrome" << endl;
            break;
        }
        
    } 
    

    return 0;
}