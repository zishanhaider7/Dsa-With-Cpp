#include <iostream>

using namespace std;

void pattern7(int n){
    for(int i =0;i<n;i++){
        //for space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //for star
        for(int k=0;k<(2*i)+1;k++){
            cout<<"*";
        }
        //for space
        for(int l=0;l<n-i;l++){
            cout<<" ";

        }
         cout<<endl;
    }
   
}

int main(){

    int n;
    cout<<"enter the number of term you want"<<endl;
    cin>>n;

    pattern7(n);



    return 0;
}