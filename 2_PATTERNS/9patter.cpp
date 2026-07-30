#include <iostream>

using namespace std;


void pattern9(int n){
    for(int i=0;i<n;i++){
        //for space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        // for star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //for space
        for(int l =0;l<n-i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern99(int n){
    for(int i=0;i<n;i++){
        //for space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*n -(2*i+1); k++){
            cout<<"*";
        }
        for(int l =0;l<i;l++){
            cout<<" ";
        }
    cout<<endl;

    }
    
}
int main(){

    int n;
    cin>>n;
    pattern9(n);
    pattern99(n);
    return 0;
}