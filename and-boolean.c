#include <stdio.h>
#include <stdbool.h>

int main(){
    // logical operator == && and checks if two conditions are true

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe Weather is good!");
    }
    else{
        printf("\nThe Weather is bad!");
    }
    return 0;
}