#include <iostream>

using namespace std;


void pattern8( int n){
    // int i;

    for(int m=0;m<n;m++){
    for( int i =0;i<m;i++){
        cout<<" ";
    }
    for(int j=1;j<=2*n-(2*m+1);j++){
        cout<<"*";
    }
    for(int k=0;k<n;k++){
        cout<<" ";
    }
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    pattern8(n);
    return 0;
}