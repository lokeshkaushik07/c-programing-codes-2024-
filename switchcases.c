#include <stdio.h>

int main (){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("You did okay!\n");
            break;
        case 'C':
            printf("At least its not an F!\n");
            break;
        case 'F':
            printf("You are failed!\n");
            break;  
        default:
            printf("Please enter a valid grade.");
    }
    return 0;
}