#include <iostream>
using namespace std;

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
        cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter th number of line here for the printing pattern"<<endl;
    cin>>n;
    pattern6(n);


}