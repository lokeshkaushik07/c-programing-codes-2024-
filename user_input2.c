#include <stdio.h>
#include <string.h>
int main(){

    char name[25];
    int age;

    printf("\nWhat is your name?\n");
    //scanf("%s", &name); if we have name with surname also 
    fgets(name , 25 , stdin);
    name[strlen(name)-1]='\0';

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s , how are you?\n" , name);
    printf("Your age is %d" , age);

    return 0;
}