#include <stdio.h>
#include <string.h>



int main(){

    char car[100];
    printf("\nwhich color is your buggati?\n");
    fgets(car, 100, stdin);
    car[strlen(car)-1]='\0';

    printf("\nHello Sir , Your buggati is of %s color", car);

}