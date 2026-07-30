#include <iostream>

using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i + 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < n - i + 1; space++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space <= i; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < 2 * n - (2 * i + 1); star++)
        {
            cout << "*";
        }
        for (int space = 0; space <= i; space++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int star = 1;
        if (n % 2 == 0)
            star = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << star;
            star = 1 - star;
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int number = 1; number <= i; number++)
        {
            cout << number;
        }
        // space
        for (int space = 0; space < 2 * n - (2 * i); space++)
        {
            cout << " ";
        }

        // number
        for (int number = i; number >= 1; number--)
        {
            cout << number;
        }

        cout << endl;
    }
}
void pattern12(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num;
            num += 1;
        }

        cout << endl;
    }
}
void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A' + n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    for (char i = 'A'; i <= 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pattern17(int n)
{
    for (int i = 0; i < n; i++)

    {

        for (int space = 0; space < n - i + 1; space++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int star = 0; star < (2 * i + 1); star++)
        {
            cout << ch;
            if ((2 * i + 1) / 2 > star)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int space = 0; space < n - i + 1; space++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern19(int n)
{
    // first half
    for (int i = 0; i < n; i++)
    {

        // star
        for (int star = 0; star < n - i; star++)
        {
            cout << "*";
        }
        // for space
        for (int space = 0; space < 2 * i; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < n - i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //  second half
    for (int i = 1; i <= n; i++)
    {

        // star
        for (int star = 1; star <= i; star++)
        {
            cout << "*";
        }
        // for space
        for (int space = 1; space <= 2 * n - (2 * i); space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        // for space
        int space = 2 *(n-star);

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
                if(i==0 || i==n-1 ||j ==0 ||j==n-1) cout<<"*";
                else cout<<" ";
        }
        cout<<endl;
        
    }
    
}
int main()
{
    int n;
    cout << " enter the number" << endl;
    cin >> n;
    pattern21(n);

    return 0;
}