#include <stdio.h>

int factorial( int n){
    if(n<=0){
        return 0;

    }
    else{
        return n* factorial(n-1);
    }
}

int main(){
    int n;
    printf("enter the digit");
    scanf("%d",&n);
    int result =factorial(n);
    printf("%d",result);

    return 0;


}