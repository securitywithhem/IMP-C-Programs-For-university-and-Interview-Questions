#include<stdio.h>


int fibocacci(int);
int fibocacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibocacci(n-1)+fibocacci(n-2);
}

int main(){
    int n = 6;
    printf("The value of fibocacci series at %d is %d",n,fibocacci(n));
    return 0;
}