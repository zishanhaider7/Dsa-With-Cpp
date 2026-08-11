#include <bits/stdc++.h>

using namespace std;

bool p_str(int i,char str[],int n)
{
    if(i>=n/2) return true;
    if(str[i] != str[n-i-1]) return false;
    return  p_str(i+1,str,n);
}

int main()
{
    
char str[]="mmmadammm";
int n=strlen(str);
// cout<<n<<endl;



cout<<p_str(0,str,n)<<endl;

return 0;
}