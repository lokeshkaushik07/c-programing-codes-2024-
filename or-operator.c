#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operator = || (or) checks if at least one condition is true.
  float temp;
  printf("\nEnter temp: ");
  scanf("%f",&temp);
    

    if(temp <= 0 || temp >= 30){
        printf("\nThe Weather is BAD!");
    }
    else{
        printf("\nThe Weather is GOOD!");
    }
    return 0;
}  
