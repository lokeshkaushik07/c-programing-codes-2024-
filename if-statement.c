#include <stdio.h>

int main (){
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if (age >= 18 && age <= 50){
        printf("You are eligible to drive truck");
    } else if (age>=14 && age <=50){
        printf("You are eligible to drive a car");
    } else if (age > 50){
        printf("Thanks for your services now you are retired");
    } else {
        printf("sorry sir you can't drive anything except a cycle");
    }
        return 0;
}