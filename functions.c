#include<stdio.h>

int divide(int a, int b){
    return a/b;
}

int main(){
    int result = divide(10, 30);
    printf("Answer is: %d", result);
    return 0;
}