#include <stdio.h>
#include <ctype.h>

int main (){

    char unit;
    float temp;

    printf("\nIs the temparature in (F) or (C)?: ");
    scanf("%c",&unit);

    unit=toupper(unit);
    // it is done so that it can take lower cases aslo as c is case senstive launguage.//
    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9/5)+32;
        printf("\nThe temp in Farenheit is: %.1f",temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp-32)*5) /9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }

    
    return 0;
}