#include<stdio.h>

int fibonacci(int);

int main(){
    int n = 10;
    printf("%d\n", fibonacci(n));
}
int fibonacci(int n){
    if(n<=1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

    return 0;
}